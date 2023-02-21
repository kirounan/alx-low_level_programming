#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_times_table - print time table of n
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
		if (n == 0)
		{
			putchar('\n');
			break;
		}
		printf(", ");
		for (j = 1; j <= n; j++)
		{
			res = i * j;
			if ((res / 100) > 0)
			{
				putchar((res / 100) + '0');
				putchar(((res / 10) % 10)  + '0');
			}
			else if ((res / 10) > 0)
			{
				putchar(' ');
				putchar((res / 10) + '0');
			}
			else
			{
				printf("  ");
			}
			putchar((res % 10) + '0');
			if (j == n)
			{
				break;
			}
			printf(", ");
		}
		putchar('\n');
	}
}
