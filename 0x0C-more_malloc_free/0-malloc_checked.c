#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check if malloc is valid
 * with this number of memory locations
 * @b: size
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
