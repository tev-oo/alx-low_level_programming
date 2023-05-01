/*
 * File: 6-pop_listint c
 * Auth: Tev
 */
#include "lists.h"
/**
 * pop_listint - deletes the elment in the list
 * @head : pointer to the head of the linked list
 * Return: list to return elament (elem), else 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int elem;

	if (!head || !*head)
		return (0);

	elem = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;

	return (elem);

}
