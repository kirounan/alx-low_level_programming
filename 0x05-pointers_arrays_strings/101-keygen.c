#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * checksum - sym of charachters values in string
 * @s: input char
 * Return: integer (sum)
 */
unsigned long checksum(char *s)
{
unsigned long sum = 0;
while (*s)
{
	sum += *s;
	s++;
}
return (sum);
}
/**
 * main - prints password for the filr crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	char ascci[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	unsigned long sum;
	int i;

	srand(time(NULL));
	while (1)
	{
		for (i = 0; i < (int)sizeof(s); i++)
		{
			s[i] = ascci[rand() % (sizeof(ascci) - 1)];
		}
		s[i] = '\0';
		sum = checksum(s);
		if (sum == sizeof(s) * 84)
		{
			break;
		}
	}
	printf("%s", s);
	return (0);
}
