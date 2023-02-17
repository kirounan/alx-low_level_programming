#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'printing hexadecimal'
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= 'f'; x++)
	{
		putchar(x);
		if (x == '9')
		{
			x = 'a';
			x--;
		}
	}
	putchar('\n');
	return (0);
}
