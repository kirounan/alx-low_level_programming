#include <stdio.h>
#include "main.h"

/**
* print_diagsums - sum of the two matrix diagonals
* @a: input matrix
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int d1 = 0;
	int d2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * (size + 1)];
		d2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, ", d1);
	printf("%d", d2);
	printf("\n");
}
