#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be written to created file
 *
 * Return: 1 on succes -1 on fialure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t content_size, write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0400);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	content_size = strlen(text_content);
	write_count = write(fd, text_content, content_size);
	if (write_count == -1 || write_count < content_size)
		return (-1);

	close(fd);
	return (1);
}
