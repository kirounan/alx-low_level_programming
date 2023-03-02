#include <stdio.h>
#include "main.h"
/**
 * print_number - print integer
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	int result;
	int t;
	int exp;

	exp = 1;
	if (n >= 0)
		result = n * -1;
	else
	{
		result = n;
		putchar('-');
	}

	t = result;
	while (t <= -10)
	{
		exp *= 10;
		t /= 10;
	}
	while (exp >= 1)
	{
		putchar(((result / exp) % 10) * -1 + '0');
		exp /= 10;
	}
}
