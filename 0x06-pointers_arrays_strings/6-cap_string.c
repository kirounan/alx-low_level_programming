#include <stdio.h>
#include <ctype,h>
#include "main.h"
/**
 * cap_string - transform to uppercase.
 * @s: pointer to input string.
 * Return: Returns pointer to the result string.
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	if (islower(s[0]))
		s[0] -= ('a' - 'A');
	while (s[i + 1] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i] == sep[j] && islower(s[i + 1]))
				s[i + 1] -= ('a' - 'A');
		i++;
	}
	return (s);
}
