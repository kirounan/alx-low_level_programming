#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'positive or negative'
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		puts("is positive");
	}
	else if(n<0)
	{
		puts("is negative");
	}
	else
	{
		puts("is zero");
	}
	/* your code goes there */
	return (0);
}
