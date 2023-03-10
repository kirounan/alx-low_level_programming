#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make ans amount of money
 * if coins are 1 , 10 , 2 . 25 , 5
 * @argc: number of arguments
 * @argv: argument Strings
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int total;
	int min;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	min = 0;
	while (total > 0)
	{
		if (total >= 25)
		{
			total -= 25;
		}
		else if (total >= 10)
		{
			total -= 10;
		}
		else if (total >= 5)
		{
			total -= 5;
		}
		else if (total >= 2)
		{
			total -= 2;
		}
		else
		{
			total -= 1;;
		}
		min += 1;
	}
	printf("%d\n", min);
	return (0);
}
