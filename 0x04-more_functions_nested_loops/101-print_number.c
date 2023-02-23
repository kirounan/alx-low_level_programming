#include <stdio.h>
#include "main.h"

/**
 * print_number - Function that prints an integer with putchar
 * @n: integer number
 * Description: Can only use _putchar to print numbers
 */
void print_number(int n)
{
	unsigned int n2;

	if (n < 0)
	{
		n2 = -n;
		_putchar('-');
	} else
		n2 = n;

	if (n1 / 10)
		print_number(n2 / 10);
	_putchar((n2 % 10) + '0');
}
