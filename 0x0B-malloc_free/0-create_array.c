#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creatdynamic arrays with malloc
 *@size: size of the array
 *@c: character to initialize
 * Return: a pointer to the array, or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	int i;

	if (!size)
		return (NULL);
	if (size)
	{
		array = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
