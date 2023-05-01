/*
 * File: 9-insert_nodeint c
 * Auth: Tev
 */
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a element the list
 * (listint_at a given position
 * @head: Arrow at the first element in the list
 * @idx: Indexof the new elementto be added
 * @n: Info of new element to be added
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int elem;
	listint_t *new_element;
	listint_t *hold = *head;

	new_element = malloc(sizeof(listint_t));
	if (!new_element || !head)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (idx == 0)
	{
		new_element->next = *head;
		*head = new_element;
		return (new_element);
	}

	for (elem = 0; hold && elem < idx; elem++)
	{
		if (elem == idx - 1)
		{
			new_element->next = hold->next;
			hold->next = new_element;
			return (new_element);
		}
		else
			hold = hold->next;
	}

	return (NULL);
}
