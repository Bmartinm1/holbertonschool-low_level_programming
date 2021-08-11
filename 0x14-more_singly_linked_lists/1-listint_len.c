#include "lists.h"

/**
 * listint_len - prints the number of elements linked in the listint_t list
 * @h: pointer to list
 *
 * Return: number of linked nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
