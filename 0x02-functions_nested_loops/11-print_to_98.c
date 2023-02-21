#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints integers from n to 98
 * @n: number input
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(", ");
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(", ");
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}


