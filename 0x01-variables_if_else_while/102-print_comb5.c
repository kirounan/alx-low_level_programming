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
	int r;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '8'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for (r = z + 1; r <= '9'; r++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(r);
					if (x == '9' && y == '8' && z == '9' && r == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
