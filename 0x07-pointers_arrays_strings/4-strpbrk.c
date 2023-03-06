#include <stdio.h>
#include "main.h"

/**
* _strpbrk - find character in string
* @s: input string
* @accept: character to find in string
* Return: string
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; *(s + i) != '\0'; i++)
	{
		for (j = 0 ; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == s[i])
			{
				return (s + i);
			}
		}
		if (*(accept + j) == s[i])
		{
			return (s + i);
		}
	}
	return (0);
}
