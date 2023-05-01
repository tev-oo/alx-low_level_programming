/*
 * File: 5-free_listint2 c
 * Auth: Tev
 */
#include "lists.h"
/**
 * free_listint2 - Releases the linkedlist
 * @head: Pointsto the released list listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}

	*head = NULL;
}
