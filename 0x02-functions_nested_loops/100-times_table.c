#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - print time table of n
 * @n: input number
 */
void print_times_table(int n)
{
	int res;
	int i;
	int j;
	
	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		for (j = 1; j <= n; j++)
		{
			res = i * j;
			if ((res / 10) > 0)
			{
				putchar((res / 10) + '0');
			}
			else
			{
				putchar(' ');
			}
			putchar((res % 10) + '0');
			if (j == n)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			putchar(' ');
		}
		putchar('\n');
	}
}
