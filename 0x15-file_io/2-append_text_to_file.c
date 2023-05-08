#include "main.h"

/**
 * append_text_to_file - apprnds text at the of a file
 *
 * @filename: name of the file
 * @text_content: text to append to file
 *
 * Return: 1 if success, -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write_bytes = write(fd, text_content, len);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
