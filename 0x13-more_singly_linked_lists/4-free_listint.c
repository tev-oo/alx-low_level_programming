/*
 * File: 4-free_listint c
 * Auth: Tev
 */
#include "lists.h"

/**
 * free_listint - Releases the list(listint_T)
 * @head: Relaesed from the list
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
