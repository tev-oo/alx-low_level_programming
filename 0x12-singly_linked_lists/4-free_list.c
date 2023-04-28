#include "lists.h"

/**
 * free_list - Frees a list(active_node)
 * @head: list_t list From the beginning of the linked list.
 *
 */

void free_list(list_t *head)
{
	list_t *active_node;

	while ((active_node = head) != NULL)
	{
		head = head->next;
		free(active_node->str);

	}
}
