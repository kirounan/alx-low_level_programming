#include <stdio.h>
void printptch()
{
	puts("_putchar");
}
void print_alphabet()
{
	int i;

	for (i = 'a';i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
