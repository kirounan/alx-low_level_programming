#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print sum of multiple number
 * @argc: integer
 * @argv: arguments string
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i, j, ans = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		ans += atoi(argv[i]);
	}
	printf("%i\n", ans);
	return (0);
}
