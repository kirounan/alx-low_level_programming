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
	int sum;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '8'; y++)
		{
			sum = (y - '0') + ( (x - '0') * 10 ) + 1;
			for (z = (sum / 10)+'0'; z <= '9'; z++)
			{
				for (r = '0'; r <= '9'; r++)
				{
					if (z == (sum / 10)+'0' && r == '0')
                                        {
                                                r = (sum % 10) + '0';
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
			}
		}
	}
	putchar('\n');
	return (0);
}
