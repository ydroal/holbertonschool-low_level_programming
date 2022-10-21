#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string to be counted its length.
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
  * isPalindrome - judge if string is palindrome or not.
  *
  * @s: string to be judged
  * @tail: length of string
  * @head: array counter
  * Return: 0 - if a string is not a palindrome
  *	    1 - if a string is a palindrome
  */

int isPalindrome(char *s, int head, int tail)
{
	if (s[head] != s[tail])
		return (0);
	if (head <= tail / 2 && s[head] == s[tail])
		return (isPalindrome(s, head + 1, tail - 1));

	return (1);
}

/**
  * is_palindrome - judge if string is palindrome or not.
  *
  * @s: string to be judged
  * Return: 0 - if a string is not a palindrome
  *	    1 - if a string is a palindrome
  */

int is_palindrome(char *s)
{
	int i = 0;
	int tail;

	tail = _strlen_recursion(s) - 1;

	return (isPalindrome(s, i, tail));
}
