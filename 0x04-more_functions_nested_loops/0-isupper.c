#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - check input letter upper or lower
 * @c: character to check
 *
 * Return: 0 for upper 1 for lower
 */


int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
