#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @ihead: A pointer to the list_t list
 * @str: The string to be added in the list
 *
 * Return: NULL if it fails, else address the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = temp;
	new->length = length;
	new->next = *head;

	*head = new;

	return (new);
}
