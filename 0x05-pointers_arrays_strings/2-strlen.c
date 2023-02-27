#include <stdio.h>
#include "main.h"

/**
 * _strlen - function with one argument that return string length
 * @s: pointer of type char
 *
 * Description: strlen similiar function that return length
 * Return: integer (string length)
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
