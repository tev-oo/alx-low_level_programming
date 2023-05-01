/*
 * File: 8-sum_listint c
 * Auth: Tev
 */
#include "lists.h"
/**
 * sum_listint - The sum of all the data(n)linked-list list
 * @head :  to the head of the list
 * Return: Total of all the info, else 0 if empty
 */
int sum_listint(listint_t *head)
{
	int total;

	total = 0;

	while (head)
	{
	total += head->n;
	head = head->next;
	}
	return (total);
}
