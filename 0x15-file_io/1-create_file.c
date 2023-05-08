#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified name and text content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 * The created file must have permissions: rw-------.
 * If the file already exists, it will be truncated.
 * If @filename is NULL, returns -1.
 * If @text_content is NULL, an empty file will be created.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, close_result;
	size_t text_length = 0;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;

		file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
		if (file_descriptor == -1)
			return (-1);

		write_result = write(file_descriptor, text_content, text_length);
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}

		close_result = close(file_descriptor);
		if (close_result == -1)
			return (-1);
	}
	else
	{
		file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
		if (file_descriptor == -1)
			return (-1);

		close_result = close(file_descriptor);
		if (close_result == -1)
			return (-1);
	}

	return (1);
}
