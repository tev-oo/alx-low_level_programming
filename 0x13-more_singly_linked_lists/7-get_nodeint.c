/*
 * File: 7-get_nodeint
 * Auth: Tev
 */
#include "lists.h"

/**
 * get_nodeint_at_index - Gets thr nth element of listint_t
 * @head: first node in the linked list
 * @index: index elememt
 * Return: Point at the nth element,else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t elem;

	for (elem = 0; (elem < index) && (head->next); elem++)
	head = head->next;

	if (elem < index)
	return (NULL);

	return (head);
}
