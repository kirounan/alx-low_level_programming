#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create 2D dynamic array
 *@width: rows
 *@height: columns
 * Return: a pointer to a 2 dimensional array of integers or null if invalid
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;
	int k;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[k][j] = 0;
		}
	}
	return (matrix);
}
