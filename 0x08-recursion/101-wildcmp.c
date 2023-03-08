#include <stdio.h>
#include "main.h"

/**
 * wildcmp - Returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: String to compare to
 * @s2: String with wild character
 *
 * Return: 1 if identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
	}

	return (0);
}
