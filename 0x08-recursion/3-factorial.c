#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns factorial of n
 * @n: input positive integer number
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (1);
	return (n * factorial(n - 1));
}
