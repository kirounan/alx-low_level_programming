#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Check the value of c
 * @c: The number to be checked
 * Return: 1 if the number is lower. 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
