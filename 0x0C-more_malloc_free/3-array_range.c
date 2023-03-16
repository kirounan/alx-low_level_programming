#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - order array min and max
 * @min: input minimum
 * @max: input maximum
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, f;

	f = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * full);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
