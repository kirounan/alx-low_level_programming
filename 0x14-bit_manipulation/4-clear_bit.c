#include "main.h"

/**
 * clear_bit - set value to 1 of given index
 * @n :pointer to unsigned int
 * @index: index to e set
 * Return: 1 if succes -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	x <<= index;
	*n &= ~x;
	return (1);
}
