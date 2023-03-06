#include <stdio.h>
#include "main.h"
/**
 * set_string - double pointer to pointer
 * @s: double pointer to address
 * @to: pointer
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
