#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int length, c, prod, i, j, l1, l2;
	int *res;

	if ((argc != 3 || !(isdigit(argv[1]))) || !(isdigit(argv[2])))
	{
		puts("Error");
		exit(98);
	}
	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);
	length = l1 + l2;
	res = calloc(length, sizeof(int *));
	if (res == NULL)
	{
		puts("Error");
		exit(98);
	}
	for (i = l2 - 1; i >= 0; i--)
	{
		c = 0;
		for (j = l1; j >= 0; j--)
		{
			prod = (argv[2][i] - '0') * (argv[1][j] - '0');
			c = (prod / 10);
			res[(i + j) + 1] += (prod % 10);
			if (res[(i + j) + 1] > 9)
			{
				res[i + j] += res[(i + j) + 1] / 10;
				res[(i + j) + 1] = res[(i + j) + 1] % 10;
			}
			res[(i + j) + 1] += c;
		}
	}

	if (!res[0])
		i = 1;
	else
		i = 0;
	for (; i < length; i++)
		printf("%d", res[i]);

	putchar('\n');
	free(res);
	return (0);
}
