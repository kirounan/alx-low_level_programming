#include "3-calc.h"
/**
 * op_add - this function adds two numbers
 * @a:the first number
 * @b:the second number
* Description: this function adds two numbers
* Return: return the result of the addition
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this function sub two numbers
 * @a:the first number
 * @b:the second number
* Description: this function sub two numbers
* Return: return the result of the substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function multiply two numbers
 * @a:the first number
 * @b:the second number
* Description: this function multiply two numbers
* Return: return the result of the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - this function divide two numbers
 * @a:the first number
 * @b:the second number.
* Description: divide 2 numbers
* Return: return the result of the division
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - this function calcualte the modulelus
 * @a:the first number
 * @b:the second number
* Description: this function calculate the modulelus
* Return: result of modelus
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
