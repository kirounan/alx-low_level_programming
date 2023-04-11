#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list
 * @h: pointer to the head of list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
