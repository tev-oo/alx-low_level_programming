/*
 * File: 102-free_listint_safe.c
 * Auth: Tev
 */
#include "lists.h"

/**
 * free_listint_safe - Releses the list
 * @h: Arrow to the first element in thelist
 * Return: number of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int disp;
	listint_t *hold;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		disp = *h - (*h)->next;
		if (disp > 0)
		{
			hold = (*h)->next;
			free(*h);
			*h = hold;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
