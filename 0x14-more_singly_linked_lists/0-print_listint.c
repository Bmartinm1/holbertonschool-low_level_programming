#include "lists.h"

/**
 * print_listint - prints all elements in listint_t list
 * @h: points to node
 *
 * Return: node number
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
