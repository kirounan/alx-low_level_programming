#include "main.h"
#include <string.h>
/**
 * print_binary - prints the number in binary
 * @n : unsigned int
 */
void print_binary(unsigned long int n)
{
	int x = n;
	if (x > 1)
		print_binary(x >> 1);

	putchar((x & 1) + '0');
}
