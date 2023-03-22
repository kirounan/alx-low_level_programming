#include "function_pointers.h"
/**
 * print_name- excute the parameter function
 *@name: string
 *@f: this a function pointer, that takes a string.
 * Description: excute a print function from callback
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
