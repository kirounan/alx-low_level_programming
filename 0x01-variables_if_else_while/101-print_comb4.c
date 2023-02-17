#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'printing numbers combinations'
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = x + 1; y <= '8'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == '7' && y == '8' && z == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
