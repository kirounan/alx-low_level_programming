#include <stdio.h>
#include "main.h"

/**
 * print_line - printing lines with underscore
 * @n: number of times
 *
 * Return: nothing
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
