#include "variadic_functions.h"
/**
 * print_strings - print strings with separetors
 *@separator: separetors of strings
 *@n: the number of strings
* Description: this function prints the string parameters
* with separetors
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(strings, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(strings);
}
