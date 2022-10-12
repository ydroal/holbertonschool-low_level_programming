#include "main.h"
/**
  * cap_string - capitalizes all words of a string.
  *
  * @s: string to be changed in uppercase.
  * Return: pointer of the string capitalized
  */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{

		if (s[i] == 32 || (s[i] >= 9 && s[i] <= 10)
		|| (s[i] >= 33 && s[i] <= 34) || (s[i] >= 40 && s[i] <= 41)
		|| s[i] == 44 || s[i] == 46 || s[i] == 58 || s[i] == 63
		|| s[i] == 123 || s[i] == 125)
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		i++;
	}
	return (s);
}
