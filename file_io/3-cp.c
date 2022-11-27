#include "main.h"

/**
  * _close - closes a file descriptor
  *
  * @fd: file descriptor
  * Return: Nothing
  */

void _close(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  * main - copies the content of a file to another file
  *
  * @argc: argument count
  * @argv: source file and destination file
  * Return: 0 if success
  */

int main(int argc, char *argv[])
{
	int fd_f, fd_t, w, r;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_f = open(argv[1], O_RDONLY);
	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((r = read(fd_f, buff, 1024)) > 0)
	{
		w = write(fd_t, buff, r);
		if (w < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_close(fd_f);
	_close(fd_t);
	return (0);
}
