#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - function with 1 argument
 * @s: char point to first charachter in string
 *
 * Description: function that prints a sentence (string) in reverse order
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	len -= 1;
	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	};
	putchar('\n');
}
