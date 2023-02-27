#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - function with 1 argument
 * @s: char point to first charachter in string
 *
 * Description: function that prints a sentence (string) in reverse order
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, k, len;

	len = strlen(s);
	k = 0;
	i = len - 1;
	while (k < (len / 2))
	{
		s[i] += s[k];
		s[k] = s[i] - s[k];
		s[i] -= s[k];
		i--;
		k++;
	}
}
