#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t write_count, read_count;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	buff = malloc((sizeof(char) * letters) + 1);
	if (buff == NULL)
		return (0);

	read_count = read(fd, buff, letters);
	buff[letters] = '\0';
	write_count = write(STDOUT_FILENO, buff, read_count);
	if (write_count == -1 || write_count < read_count)
		return (0);

	close(fd);
	return (write_count);
}
