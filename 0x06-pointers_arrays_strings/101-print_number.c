#include <stdio.h>
#include "main.h"
/**
 * print_number - print integer
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int res = n;
	int num = 0;
	int i;

	if (n < 0)
		res = -n;
	if (!n)
		num = 1;

	while (res >= 1)
	{
		rea /= 10;
		num++;
	}

	for (i = 0; i < num; i++)
	{
		int pow = 1;
		int j;
		int k;

		for (j = 0; j < num - i - 1; j++)
		{
			pow *= 10;
		}

		k = ((n / pow) % 10);
		if (n < 0)
		{
			k = -k;
			if (!i)
				putchar('-');
		}
		putchar('0' + k);
	}
}
