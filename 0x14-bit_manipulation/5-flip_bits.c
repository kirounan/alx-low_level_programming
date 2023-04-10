#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip a number
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	int num = 0;

	t = n ^ m;
	while (t >= 1)
	{
		if ((t & 1) == 1)
		num++;
		t >>= 1;
	}
	return (num);
}
