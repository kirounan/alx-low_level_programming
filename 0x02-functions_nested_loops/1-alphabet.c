#include <stdio.h>
#include "main.h"
#include "main.c"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'printing alphabet'
 * Return: 0 (Success)
 */
void printptch()
{
        puts("_putchar");
}
void print_alphabet(void)
{
        int i;

        for (i = 'a';i <= 'z' ; i++)
        {
                putchar(i);
        }
        putchar('\n');
}
