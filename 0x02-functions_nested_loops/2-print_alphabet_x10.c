#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10  - print alphabet in lower case 10 times
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10 ; j++)
	{
		for (i = 'a'; i <= 'z' ; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
