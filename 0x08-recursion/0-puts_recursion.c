#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints the input string followed by a new line
 * @s:input  string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

