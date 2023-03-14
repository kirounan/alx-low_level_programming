#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wordcount - function that counts words separeted by space
 * @str: pointer to string
 * Return: Number of words
 */

int wordcount(char *str)
{

	int i;
	int n = 0;

	for (i = 0; str[i]; i++)
	{

		if (str[i] != ' ')
		{
			n++;

			for (; str[i + 1] != ' ' && str[i + 1] != '\0'; i++)
				;
		}

	}
	return (n);
}

/**
 * word_len - function that return the length of word
 * @str: pointer to string
 * Return: Length of word
 */

int word_len(char *str)
{
	int i, wn= 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		++n;

	return (n);
}

/**
 * free_matrix - function that frees a 2D grid of char pointers
 * @grid: pointer to matrix
 * @height: integer
 * Return: npthing
 */

void free_matrix(char **grid, int height)
{
	int k;

	for (k = 0; k <= height; k++)
		free(grid[k]);

	free(grid);
}

/**
 * strtow - Splits a string into words
 * @str: Char double pointer to string
 * Return: Char double pointer of  an array of strings (words)
 */

char **strtow(char *str)
{
	int i, j = 0, k, wc, wl;
	char **s = NULL;

	wc = wordcount(str);

	s = malloc(wc + 1);

	if (s == NULL || !wc)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			wl = (word_len(str + i));
			s[j] = malloc((wl + 1) * sizeof(char));

			if (s[j] == NULL)
			{
				free_matrix(s, j);
				return (NULL);
			}

			for (k = 0; k < wl; i++, k++)
				s[j][k] = str[i];

			s[j][k] = '\0';

			if (j == wc)
				break;

			j++;
		}
	}

	s[j] = '\0';
	return (s);
}
