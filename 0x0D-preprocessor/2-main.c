#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
* main - print the name of the current file
*Return: 0 if success
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
