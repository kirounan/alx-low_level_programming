#include "lists.h"

/**
 * free_list - frees a single linked list
 * @head: pointer to the list
 **/
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	if (head)
	{
		current = head;
		next = head->next;
		while (next_node)
		{
			free(current->str);
			free(current);
			current = next;
			next = next->next;
		}
		free(current->str);
		free(current);
	}
}
