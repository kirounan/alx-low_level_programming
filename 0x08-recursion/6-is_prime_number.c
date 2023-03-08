#include <stdio.h>
#include "main.h"

/**
 * prime_help - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 2 to n to check modelus
 *
 * Return: 1 if prime 0 otherwise
 */
int prime_help(int x, int y)
{
	if (x == y)
		return (1);
	else if (!(x % y))
		return (0);
	return (prime_help(x, y + 1));
}
/**
 * is_prime_number - Check prime
 * @n: Number Integer
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_help(n, 2));
}
