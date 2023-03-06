#include <stdio.h>
#include "main.h"
/**
 * _memset - filling memory locations with a constant byte.
 * @s: Source string
 * @b: Constant byte
 * @n: lenght of the buffer
 * Return: destination string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
