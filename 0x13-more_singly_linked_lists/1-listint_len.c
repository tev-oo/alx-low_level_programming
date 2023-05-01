/*
 * File: 1-listint_len c
 * Auth: Tev
 */
#include "lists.h"

/**
 * listint_len -Function that returns the number of elements in a linked(listint_t)
 * @h:Moves throgh the list
 * Return: The total number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}

	return (total);
}
