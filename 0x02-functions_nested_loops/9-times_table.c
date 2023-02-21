#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - print time table
 */
void times_table(void)
{
	int res;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		for (j = 1; j <= 9; j++)
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
			if (j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
