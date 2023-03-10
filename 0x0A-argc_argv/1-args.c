#include <stdio.h>
#include "main.h"
/**
 * main - rint number of arguments
 * @argc: integer
 * @argv: array of strings
 * Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
