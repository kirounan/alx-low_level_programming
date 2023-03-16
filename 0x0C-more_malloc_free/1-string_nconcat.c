#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatenate 2 strings
* @s1: first dtring
* @s2: second string
* @n: length of string
* Return: pointer to output string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int leng, i, j;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	leng = strlen(s1);
	out = malloc(sizeof(*out) * leng + n + 1);
	if (out == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < (n + leng); i++)
	{
		if (i < leng)
		{
			out[i] = s1[i];
		}
		else
		{
			out[i] = s2[j++];
		}
	}
	out[i] = '\0';
	return (out);
}
