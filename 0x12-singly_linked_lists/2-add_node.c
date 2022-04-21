#include "lists.h"

/**
* add_node - adds anew node at the beginning of a list_t list
* @head: pointer to the list_t link
* @str: string to duplicate
* Return: address of the new element, or NULL  if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *dest;
	unsigned int len = 0;

	while (*(str + len))
		len++;

	dest = malloc(sizeof(list_t));

	if (!dest)
	{
		return (NULL);
	}
	dest->str = strdup(str);
	dest->len = len;
	dest->next = (*head);
	(*head) = dest;

	return (*head);
}
