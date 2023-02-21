#include <stdio.h>

/**
 * main - computes and prints the summultiples of 3 and 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (!(i % 3))
		{
			sum += i;
		}
		else if (!(i % 5))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

