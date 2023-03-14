#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 *@av: arguments
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i;
	int w, j, k, count, m, word;
	char **p;
	char *x;

	w = 0;
	j = 0;
	i = 0;
	count = 0;
	if (!(*str) || str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || !str[i + 1]))
			w++;
	}
	p = (char **)malloc((w + 1));
	if (p == NULL)
		return (NULL);
	for (word = 0; str[word] && j <= w; word++)
	{
		count = 0;
		if (str[word] != ' ')
		{
			for (i = word ; str[i]; i++)
			{
				if (str[i] == ' ')
					break;
				count++;
			}
			*(p + j) = (char *)malloc((count + 1));
			if (*(p + j) == NULL)
			{
				for (k = 0; k <= j; k++)
				{
					x = p[k];
					free(x);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; word < i; word++)
			{
				p[j][m] = str[word];
				m++;
			}
			p[j][m] = '\0';
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}
