#include <stdio.h>
#include "main.h"

/**
 * sqrt_help - helper function (tail recursion) for sqrt
 * @x: same number as n
 * @y: number that iterates from 1 to n
 * Return: the answer of sqrt if exists -1 otherwise
 */
int sqrt_help(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt_help(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: answer of square root
 */
int _sqrt_recursion(int n)
{

	return (sqrt_help(n, 1));
}
