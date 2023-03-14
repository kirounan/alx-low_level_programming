#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatetante two strings
 *@s1: first string
 *@s2: second string
 * Return: pointer should point to the concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	unsigned int i;
	int n1;
	int n2;
	int j;

	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = strlen(s1);
	n2 = strlen(s2);
	newstr= (char *)malloc((n1 + n2 + 1));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		newstr[i] = s1[i];
	for (; s2[j]; i++)
	{
		newstr[i] = s2[j];
		j++;
	}
	return (newstr);
}
