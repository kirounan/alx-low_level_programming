#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * in a linked list
 * @h: pointer to the head of list
 *
 * Return:number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
