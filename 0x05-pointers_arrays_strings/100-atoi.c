#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _atoi - function with one argument
 * @s: char type of pointer argument
 *
 * Description: convert a string to integer
 * Return: integer value of s
 */
int _atoi(char *s)
{
	int i;
	int si;
	int res;

	i = 0;
	si = 1;
	res= 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			si *= -1;
		if (isdigit(s[i]))
		{
			while (isdigit(s[i]))
			{
				res = (s[i] - '0') + res * 10;
				i++;
			}
			break;
		}
		i++;
	}
	res *= si;
	return (res);
}
