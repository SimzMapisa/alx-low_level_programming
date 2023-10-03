#include "main.h"

char *Create_Buffer(char *file);
void close_file(int fd);

/**
 * Create_Buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *Create_Buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int p;

	p = close(fd);

	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int from, to, p, n;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = Create_Buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	p = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		n = write(to, buf, p);

		if (to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		p = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (p > 0);

	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
