#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz
 *
 * Description: prints the numbers from 1 to 100
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both 3 and 5
 *
 * Return: always 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz");
		else if (!(i % 3))
			printf("Fizz");
		else if (!(i % 5))
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
