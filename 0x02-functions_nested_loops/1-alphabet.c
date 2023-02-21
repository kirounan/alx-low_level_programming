#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
* printptch - print string
*/
void printptch(void)
{
	puts("_putchar");
}
/**
* print_alphabet  - print alphabet in lower case
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a';i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
