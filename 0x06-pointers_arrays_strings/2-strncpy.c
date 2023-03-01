#include <stdio.h>
#include "main.h"
/**
 * _strncpy - concatenating two strings
 * @dest: destination string
 * @src: source string
 * @n: n charachters to copy
 * Return: pointer to the result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if(i == n)
			break;
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}


	return (dest);
}
