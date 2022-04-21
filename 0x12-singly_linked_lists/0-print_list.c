#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the list_t list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t str;

	for (str = 0; h; str++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (str);
}
