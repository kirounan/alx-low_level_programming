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
		char *x = haystack;
		char *y = needle;

		while (*y != '\0' && *x == *y)
        	{
                	y++;
               		x++;
		}
		if ((*haystack == *needle && !*y) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
