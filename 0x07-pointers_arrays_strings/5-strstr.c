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
	while (*haystack)
	{
		char *tmp = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
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
