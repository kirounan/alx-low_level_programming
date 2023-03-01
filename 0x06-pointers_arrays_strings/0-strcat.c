#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatenating two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the result string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = strlen(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[j + i] = src[i];
		i++;
	}

	dest[j + i] = '\0';
	return (dest);
}
