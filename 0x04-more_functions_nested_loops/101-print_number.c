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
	unsigned int rev;
	unsigned int rem;
	int f;

	rev = 0;
	if (n < 0)
	{
		n2 = n*-1;
		_putchar('-');
	}
	else
	{
		n2 = n;
	}
	while (n2 != 0)
	{
		rem = n2 % 10;
		rev = rev * 10 + rem;
		n2 /= 10;
	}
	f = 0;
	while (rev > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
		f = 1;
	}
	if (!f)
		_putchar(rev + '0');
}
