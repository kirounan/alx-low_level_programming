#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - function with one argument
 * @str: pointer to char type (string)
 *
 * Description: prints other half of input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	i = len;
	if (len % 2)
		i = (len + 1) / 2;
	else
		i /= 2;
	while (i < len)
	{
		i++;
		putchar(*(str + i - 1));
	}
	putchar('\n');
}
