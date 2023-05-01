/*
 * File: 3-add_nodeint_end c
 * Auth: Tev
 */
#include "lists.h"

/**
 * add_nodeint_end - Addition of an newelement at the end list(listint_t)
 * @head: Arrow at the first element in the list(listin_t)
 * @n:-Data to insert in thenew_element
 * Return: Show the new_element,else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *hold = *head;

	new_element = malloc(sizeof(listint_t));
	if (!new_element)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (hold->next)
		hold = hold->next;

	hold->next = new_element;

	return (new_element);
}
