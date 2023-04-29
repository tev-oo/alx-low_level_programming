/*
 * File: 0 print listint c
 * Auth: Tev
 */
#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list-listint_t
 * @h: Start ofthe list assigned
 *
 * Return: Elementsofthelinked list
 */
size_t print_listint(const listint_t *h)
{
const listint_t *point = h;
	size_t total = 0;

	while (point != NULL)
	{
		printf("%d\n", point->n);
		total += 1;
		point = point->next;
	}
	return (total);
}
