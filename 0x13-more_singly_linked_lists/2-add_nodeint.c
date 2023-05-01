/*
 * File: 2-add_nodeint c
 * Auth: Tev
 */
#include "lists.h"

/**
 * add_nodeint - Addition a new element at the Start of the list(listnt_t)
 * @head: Head first of the element in the list
 * @n:-data:New info to used in the new node
 * Return:The new-element,else null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element != NULL)
	{
		new_element->n = n;
		new_element->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_element->next = *head;
	*head = new_element;
	return (new_element);
}
