#include <stdio.h>
#include "main.h"

/**
 * print_array - function with two argument
 * @a: first argument pointer int type to an integer array
 * @n: second argument int type (array length)
 *
 * Description: prints n (input) element of an array of integers
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i ==  n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
