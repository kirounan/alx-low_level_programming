#include <stdio.h>
#include "main.h"

/**
 * puts2 - function with one argument
 * @str: char of type pointer
 *
 * Description: prints even charachters in string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(i % 2))
		{
			putchar(*(str + i));
		}
		i++;
	}
	putchar('\n');
}
