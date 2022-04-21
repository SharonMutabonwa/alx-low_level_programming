#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to the
*Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		h = h->next;
	}
	return (num);
}
