#include "lists.h"

/**
 * print_dlistint - prints every element of a list
 * @h: points to list
 *
 * Return: size_t -> number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
