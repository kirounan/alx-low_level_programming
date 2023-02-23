#include <stdio.h>
#include "main.h"

/**
 * print_number - Function that prints an integer with putchar
 * @n: integer number
 * Description: Can only use _putchar to print numbers
 */
void print_number(int n)
{
	int rev;
	int rem;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	while (rev > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}
}
