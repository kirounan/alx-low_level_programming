#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function with two arguments
 * @dest: 1st argument char type pointer to strong
 * @src: 2nd argument char type pointer to new string
 *
 * Description: copies the string to a new one
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
