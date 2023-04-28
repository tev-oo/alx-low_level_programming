#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: The list_t list to print in the nodes
 * Return: The number of data nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t dnode = 0;

	while (h)
	{
		if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->length, h->str);
	h = h->next;
	dnode++;
	}

	return (dnode);
}
