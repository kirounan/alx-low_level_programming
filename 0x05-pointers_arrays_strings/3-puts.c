#include <stdio.h>
#include "main.h"

/**
 * _puts - function with one argument
 * @str: pointer to a char (first charachter in a string)
 *
 * Description: print a string and a new line to stdout
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
