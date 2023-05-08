#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 * If @filename is NULL, returns -1.
 * If @text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, close_result;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	while (text_content[text_length] != '\0')
		text_length++;

	write_result = write(file_descriptor, text_content, text_length);
	if (write_result == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close_result = close(file_descriptor);
	if (close_result == -1)
		return (-1);

	return (1);
}
