#include <stdio.h>
#include "main.h"
/**
 * main -prints  arguments
 * @argc: arguments number + 1
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}

