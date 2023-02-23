#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character
 *
 * Return: 0 or 1
 */


int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
