#include "lists.h"

/**
 * list_len - prints the number of elements linked in the list_t list
 * @h: pointer to list
 *
 * Return: number of linked nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}	
