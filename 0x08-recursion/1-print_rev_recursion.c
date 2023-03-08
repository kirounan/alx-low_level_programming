#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints the input string
 * in reverse order followed by a new line
 * @s:input  string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
