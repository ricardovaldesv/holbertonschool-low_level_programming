#include "main.h"

/**
 *ret_error_close - error function of close
 *@fd: file
 *Return: Always 0
 */
int ret_error_close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd));
		exit(100);
	}
	return (c);
}

/**
 *main - main function
 *@argc: arguments
 *@argv: files
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	char buffer[1024];
	ssize_t bytes_read, bytes_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fd1, buffer, 1024)) > 0)
	{
		bytes_write = write(fd2, buffer, bytes_read);
		if (bytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((read(fd1, buffer, 1024)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ret_error_close(fd1);
	ret_error_close(fd2);

	return (0);
}
