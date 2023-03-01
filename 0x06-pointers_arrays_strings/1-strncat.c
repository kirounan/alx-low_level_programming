#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenating two strings n bytes
 * @dest: desination string
 * @src: source string
 * @n: number of charachters
 * Return: pointer to the result string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int s;

	s = strlen(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[s + i] = src[i];
		if (i == n)
			break;
		i++;
	}

	dest[s + i] = '\0';
	return (dest);
}
