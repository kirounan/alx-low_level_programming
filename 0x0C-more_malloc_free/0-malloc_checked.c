#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check if malloc is valid with this number of memory locations
 * @b: size
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *g = malloc(b);

	if (g == NULL)
		exit(98);
	return (g);
}
