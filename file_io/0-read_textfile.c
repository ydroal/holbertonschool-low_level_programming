#include "main.h"

/**
  * read_textfile - reads a text file and prints
  *                 it to the POSIX standard outputi.
  *
  * @filename: filename to read and write
  * @letters: number of letters it should read and print
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t rc;
	ssize_t res;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	rc = read(fd, buff, letters);
	if (rc == -1)
	{
		free(buff);
		return (0);
	}

	res = write(STDOUT_FILENO, buff, rc);

	close(fd);
	free(buff);
	return (res);
}
