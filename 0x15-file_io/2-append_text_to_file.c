#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *
 * Description: Opens file in append mode, writes the content, and closes it.
 *              Because sometimes, even files need a little more attention.
 *              If the file doesn’t exist or lack the necessary permissions,
 *              this function politely declines to do anything by returning -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

