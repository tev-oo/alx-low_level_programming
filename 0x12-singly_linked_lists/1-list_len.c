#include "lists.h"

/**
 * list_len - Finds the number of elements in a linked list lin_t
 * @h: pointer to the list_t list
 *
 * Return: The number of elements in h function
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
	elem++;
	h = h->next;
	}
	return (elem);
}
