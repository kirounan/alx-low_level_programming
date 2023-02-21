#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Check the value of c
 * @c: The number to be checked
 * Return: Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		fflush( stdout );
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		fflush( stdout );
		return (0);
	}
	else
	{
		printf("-");
		fflush( stdout );
		return (-1);
	}
}
