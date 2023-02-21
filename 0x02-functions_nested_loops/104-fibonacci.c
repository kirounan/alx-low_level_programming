#include <stdio.h>

/**
 * main - prints fibonacci series to number 98
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j;
	unsigned long int k;
	unsigned long int o;
	unsigned long int p;
	unsigned long int q;
	unsigned long int m;


	j = 1;
	k = 2;

	printf("%lu", j);
	for (i = 1; i <= 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	o = j / 1000000000;
	p = j % 1000000000;
	q = k / 1000000000;
	m = k % 1000000000;
	for (i = 92; i <= 98; i++)
	{
		printf(", %lu", q + (m / 1000000000));
		printf("%lu", m % 1000000000);
		q += o;
		o -= q;
		m += p;
		p -= m;
	}
	printf("\n");
	return (0);
}
