#include <stdio.h>

/**
 * main - prints fibonacci series to number 50
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int j;
	long int k;
	long int res;
	long int sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum += j;
		}
		res = j + k;
		j = k;
		k = res;
	}
	printf("%ld\n", sum);
	return (0);
}

