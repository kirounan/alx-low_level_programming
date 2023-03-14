#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string in malloc location
 *@str: string to repeat
 * Return: a pointer to the repeated  string or NULL if there is o string
 */
char *_strdup(char *str)
{
	char *newstr = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n]; n++);
	newstr = (char *)malloc(n + 1);
	if (newstr != NULL)
	{
		for (i = 0; str[i]; i++)
			newstr[i] = str[i];
	} else
	{
		return (NULL);
	}
	newstr[i] = '\0';
	return (newstr);
}
