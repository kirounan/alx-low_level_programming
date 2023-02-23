#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Return: 0 success
 */


int print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
