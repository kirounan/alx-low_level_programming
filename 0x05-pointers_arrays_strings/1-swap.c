#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap 2 variables with pointers
 * @a: 1st argument point to int
 * @b: 2nd argument point to int
 *
 * Description: Using pointer to swap values of 2 integers
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
