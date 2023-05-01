/*
 * File: 10-delete_nodeint c
 * Auth: Tev
 */
#include "lists.h"
/**
 * delete_nodeint_at_index - Removes the element
 * @head : Arrw to beginning of the list
 * @index: index of the element to be removed
 * Return: 1 if it pases,else -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *refr = *head;
	unsigned int elem;

	if (refr == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(refr);
	return (1);
	}

	for (elem = 0; elem < (index - 1); elem++)
	{
		if (refr->next == NULL)
		return (-1);

		refr = refr->next;
	}

	hold = refr->next;
	refr->next = hold->next;
	free(hold);
	return (1);
}
