#include <stdio.h>
#include "main.h"

/**
 * reset_to_98  take pointer to a variable and changes its value
 * @n: int type pointer n
 *
 * Description: using pointer as parameter to update integer value it points to 98
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}
