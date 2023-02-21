#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Check the value of c
 * @c: The number to be checked
 * Return: the last digit
 */
int print_last_digit(int c)
{
	printf("%d", c % 10);
	fflush(stdout);
	return (c % 10);
}
