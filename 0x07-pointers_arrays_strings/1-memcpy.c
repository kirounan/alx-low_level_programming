#include <stdio.h>
#include "main.h"
/**
 * _memcpy - filling a location in the memory with another buffer.
 * @dest: destination sttring
 * @src: source string
 * @n: lenght of buffer
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
