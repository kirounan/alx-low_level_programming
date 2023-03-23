#include "variadic_functions.h"
/**
 * print_numbers - print all the parametes
 *@separator: separetor of parameter
 *@n: the number of parameters
* Description: this function prints all the parameters with separetors
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	i = 0;

	va_start(num, n);
	while (i < n)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(num);
	printf("\n");
}
