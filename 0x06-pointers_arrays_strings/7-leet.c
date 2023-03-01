#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string s.
 * Return: Returns pointer to leetspeek string encoded.
 */
char *leet(char *s)
{
	int i;
	int j;
	char alpha[] = "aAeEoOtTlL";
	char rep[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
			if (s[i] == alpha[j])
				s[i] = rep[floor(j / 2)];
	}
	return (s);
}
