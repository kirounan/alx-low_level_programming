#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle in reverse shape
 * @size: input size of triangle
 *
 * Return: nothing
 */


void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j <= (size - i - 2))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

}
