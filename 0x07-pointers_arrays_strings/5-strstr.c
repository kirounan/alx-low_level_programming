#include <stdio.h>
#include "main.h"

/**
* _strstr - find a substring.
* @haystack: pointer to string
* @needle: pointer to substring
* Return: key string if exists null otherwise
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (check(haystack, needle) || !*needle)
			{
				return (haystack);
			}
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * check - check if string x exists in string y
 * @x: source string
 * @y: string to check
 *
 * Return: 1 if exists, otherwise 0
 */
int coincidence(char *x, char *y)
{
	while (*y != '\0' && *x == *y)
	{
		y++;
		x++;
	}

	if (*y)
		return (1);
	else
		return (0);
}
