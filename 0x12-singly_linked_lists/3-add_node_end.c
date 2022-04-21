#include "lists.h"

/**
* *add_node_end - adds a new node at the end of a list_t list.
* @head: pointer to list_t list
* @str: string to duplicate
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dest;
	list_t *temp = *head;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;

	dest = malloc(sizeof(list_t));

	if (!dest)
	{
		return (NULL);
	}

	dest->str = strdup(str);
	dest->len = len;
	dest->next = NULL;

	if (*head == NULL)
	{
		*head = dest;
		return (dest);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = dest;
	return (dest);
}
