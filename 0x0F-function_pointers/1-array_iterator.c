#include "function_pointers.h"
/**
 * array_iterator - this functions iterates an array and
 * exscute function on it
 *@array: the array to iterate
 *@size: the size of the array
 *@action: pointer to callback function
* Description: excute a function on every element in the array
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
	for (i = 0; i < size; i++)
		action(*(array + i));
	}
}
