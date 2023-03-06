#include <stdio.h>
#include "main.h"

/**
* _strspn - get length of substring
* @s: pointer to string
* @accept: pointer to substring
* Return: position of the break
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int br = 0;

	while (s[br])
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[br])
			{
				return(br);
			}
		}
		if (!accept[i])
		{
			return(br);
		}
		br++;
	}
	return (br);
}
