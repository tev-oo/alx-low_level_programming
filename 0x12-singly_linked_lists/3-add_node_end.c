#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new element at the end of a list
 * @head: First element of the list
 * @str: The string to put in the list
 *
 * Return: NULL if it fails, else the New
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int length;
	list_t *new, *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	temp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = temp;
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}

	return (*head);
}
