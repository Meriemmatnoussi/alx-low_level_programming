#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to the standard
 *                        error and exits the program.
 * @exit_code: The exit code to use when terminating the program.
 * @format: The format string for the error message.
 * @...: Additional arguments for the format string.
 */
void print_error_and_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_to == -1)
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(file_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}
