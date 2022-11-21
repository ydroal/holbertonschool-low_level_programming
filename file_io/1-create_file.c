#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to be counted its length.
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
  * create_file - creates a file.
  *
  * @filename: filename to create and write
  * @text_content: NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (0);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}

	return (1);
}
