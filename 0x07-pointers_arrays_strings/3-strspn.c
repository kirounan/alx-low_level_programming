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
	int letter;
	int pos = 0;

	while (s[pos])
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[pos])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		pos++;
	}
	return (pos);
}
