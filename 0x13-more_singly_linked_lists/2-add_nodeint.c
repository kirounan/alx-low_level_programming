#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning list
 * @head: pointer to the address of the
 * head of the list
 * @n: The integer value of the new node
 * Return:  NULL if error
 * Otherwise address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
