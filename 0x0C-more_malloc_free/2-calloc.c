#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - dynamic array with input size;
* @nmemb: input string
* @size: size
* Return: Pointer to output array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i ,len;
	
	len = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = 0;
	}
	return (p);
}
