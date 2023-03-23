#include "variadic_functions.h"
/**
 * sum_them_all - sum n parametes (all)
 *@n: the number of parameters
* Description: this function sum parameters for count n
* the first parameter
* Return: return the sum of n parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int i;

	i = 0;

	if (!n)
		return (0);
	sum = 0;
	va_start(num, n);
	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}
	va_end(num);
	return (sum);
}
