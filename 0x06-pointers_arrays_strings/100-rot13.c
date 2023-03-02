#include <stdio.h>
#include "main.h"
/**
 * rot13 - encodes a string by rotating the characters 13 charachters.
 * @s: pointer to the input string.
 * Return: Returns pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i;
	int j;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
