#include <stdio.h>
#include "main.h"

/**
* _strstr - find a substring.
* @haystack: pointer to string
* @needle: pointer to substring
* Return: key string if exists null otherwise
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *tmp = haystack;

		while (*haystack == *needle && *haystack && *needle)
		{
			needle++;
			haystack++;
		}
		if (!*needle)
		{
			return (tmp);
		}
		haystack++;
	}
	return (0);
}
