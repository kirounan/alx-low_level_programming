#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Check the value of c
 * @c: The number to be checked
 */
int _islower(int c)
{
	if( islower(c) )
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
void _putchar(int x)
{
	printf("%c",x);
}
