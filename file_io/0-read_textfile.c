#include "main.h"

/**
 *read_textfile - function that reads a text file and prints
 *@filename: pointer string character
 *@letters: number max of bytes to read
 *Return: 0 if it is NULL or fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_reads, bytes_written;

	if (fd == -1 || filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	bytes_reads = read(fd, buffer, letters);
	if (bytes_reads == -1)
	{
		return (0);
	}
	buffer[letters + 1] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_reads);
	if (bytes_written == -1)
		return (0);
	free(buffer);
	return (bytes_reads);
}
