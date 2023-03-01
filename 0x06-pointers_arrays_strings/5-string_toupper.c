#include <stdio.h>
#include <ctype,h>
#include "main.h"
/**
 * string_toupper - convert to uppercase letters
 * @s: input string
 * Return: nothing
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (islower(s[i]))
		{
			s[i] = 'A' + (s[i] - 'a');
		}
		i++;
	}
	return (s);
}
