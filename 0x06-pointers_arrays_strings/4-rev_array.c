#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse string
 * @a: string to reverse
 * @n: number of elements in string
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	i = 0;
	while (i < n)
	{
		t = a[i];
		a[i] = a[n - 1];
		a[n - 1] = t; 
		i++;
		n--;
	}
}
