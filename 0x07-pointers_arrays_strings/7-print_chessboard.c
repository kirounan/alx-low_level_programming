#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - print a chessboard pieces
 * @a: source chessboard matrix
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
