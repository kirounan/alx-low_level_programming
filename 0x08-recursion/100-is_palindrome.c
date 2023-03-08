#include <stdio.h>
#include "main.h"

/**
 * palind_help - compares the string with its reverse
 * @a: input string
 * @l: length of string
 * Return: 1 if palindorm 0 otherwise.
 */

int palind_help(char *s, int l)
{
	if (*s != *(s + l))
		return (0);
	else if (*s == 0)
		return (1);
	return (palind3(s + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: 1 if palindorme 0 otherwise
 */
int is_palindrome(char *s)
{
	return (palind_help(s, strlen(s)));
}
