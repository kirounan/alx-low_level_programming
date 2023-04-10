#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b:string from 0 and 1 else NULL
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int num = 0;
	int i;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	if (b[i] == '1')
	{
		num += k;
	}
	k *= 2;
}
	return (num);
}
