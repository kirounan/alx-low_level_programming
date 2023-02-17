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
	int f;

	f = 0;
	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for (r = y + 1; r <= '9'; r++)
				{
					if (z != '0' && r == y + 1 && f == 0)
                                        {
                                                r = '0';
						f = 1;
                                        }
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
				f = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
