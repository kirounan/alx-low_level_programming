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

	j = 1;
	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%ld\n", j);
			break;
		}
		printf("%ld, ", j);
		res = j + k;
		j = k;
		k = res;
	}
	return (0);
}

