#include <stdio.h>
#include "main.h"

/**
 * print_number - Function that prints an integer with putchar
 * @n: integer number
 * Description: Can only use _putchar to print numbers
 */
void print_number(int n)
{
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	c = 1;
	while (n > 0)
	{
		_putchar(n % 10 + '0');
		n /= 10;
	}
}
