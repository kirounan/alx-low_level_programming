#include <stdio.h>

/**
 * main - prints the highest prime factor of 612852475143
 *
 * Return: 0 success
 */
int main(void)
{
	long int pr = 612852475143;
	long int i = 3;

	while (i <= pr / 2)
		if (!(pr % i))
			pr /= i;
		else
			i += 2;
	printf("%ld\n", pr);
	return (0);
}
