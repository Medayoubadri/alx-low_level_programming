#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to STDERR and exits with a code.
 * @message: The error message to print.
 * @exit_code: The exit code to terminate the program with.
 * @file_name: The name of the file related to the error.
 *
 */
void print_error(const char *message, int exit_code, const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of arguments (file names).
 *
 * Return: 0 on success, or exit codes on failure.
 *
 * Description: Copies the content from one file to another,
 *              You’d think copying a file is simple. But no,
 *              even this can go horribly wrong. Good luck!
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", 97, NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", 98, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Error: Can't write to %s\n", 99, argv[2]);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error("Error: Can't write to %s\n", 99, argv[2]);
		}
	}

	if (bytes_read == -1)
		print_error("Error: Can't read from file %s\n", 98, argv[1]);

	if (close(fd_from) == -1)
		print_error("Error: Can't close fd %d\n", 100, argv[1]);

	if (close(fd_to) == -1)
		print_error("Error: Can't close fd %d\n", 100, argv[2]);

	return (0);
}

