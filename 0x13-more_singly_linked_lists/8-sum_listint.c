#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: pointer to a listint_t linked list
* Return: the sum of all the data (n) of a listint_t linked list.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
