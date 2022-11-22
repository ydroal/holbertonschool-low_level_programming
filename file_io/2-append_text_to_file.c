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
  * append_text_to_file - appends text at the end of a file.
  *
  * @filename: filename to append text
  * @text_content: NULL terminated string to append to the file
  * Return: 1 if the file exists or on success,
  *        -1 if the file does not exist or on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
