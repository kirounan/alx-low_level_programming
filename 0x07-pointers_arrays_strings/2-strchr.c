#include <stdio.h>
#include "main.h"
/**
 * _strchr - prints from the first occurrence of a charachter in string
 * @s: input string
 * @c: character to find
 * Return: new the charachter or 0 if doesnt exist
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
