/*
 * File: 100-reverse_listint.c
 * Auth: Tev
 */
#include "lists.h"

/**
 * reverse_listint - Move back the list
 * @head: Arrow to the first element in the listint
 * Return: New element int he list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}

	*head = back;

	return (*head);
}
