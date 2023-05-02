/*
 * File: 101
 * Auth: Tev
 */
#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - Checks the total of elements.
 * @head: Arorw pointer to list
 * Return: - 0 if not itarated.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *faston,*secon;
	size_t elem = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	secon = head->next;
	faston = (head->next)->next;

	while (faston)
	{
		if (secon == faston)
		{
			secon = head;
			while (secon != faston)
			{
				elem++;
				secon = secon->next;
				faston = faston->next;
			}

			secon = secon->next;
			while (secon != faston)
			{
				elem++;
				secon = secon->next;
			}

			return (elem);
		}

		secon = secon->next;
		faston = (faston->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Displays the list
 * @head: Arorw pointer to list of this functio
 * Return: Elemet in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t elem, index = 0;

	elem = looped_listint_len(head);

	if (elem == 0)
	{
		for (; head != NULL; elem++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < elem; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (elem);
}
