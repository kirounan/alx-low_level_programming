#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the first element of the list
 * @str: string to put in the new node
 * Return: address of the new element or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
