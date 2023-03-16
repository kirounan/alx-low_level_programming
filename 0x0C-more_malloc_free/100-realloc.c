#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_memcpy - copies memory area
*@dest: destination
*@src: source
*@n: number of bytes
*Return: pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
* *_realloc - reallocate a memory block with malloc and free
*@ptr: pointer to exicted array
*@old_size: old memory size
*@new_size: new memory size
*Return: pointer to new container or NULL if invalid
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (p);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		_memcpy(p, ptr, old_size);
	free(ptr);

	return (p);
}
