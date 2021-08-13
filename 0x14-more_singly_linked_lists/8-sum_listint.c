#include "lists.h"

/**
 * sum_listint - returns sum of data in the linked list
 * @head: points to head of list
 *
 * Return: sum of list
 */

int sum_listint(listint_t *head)
{
	unsigned int n = 0;

	if (!head)
		return (0);

	while (head)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
