#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multyplie 2 numbers
 * @argc: arguments number
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);
	return (0);
}
