#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in the list
 * @h: pointer to the list
 *
 * Return: number of nodes in list or NULL
 */

size_t dlistint_len(const dlistint_t *h);
{
	const dlistint_t *temp;
	size_t nodeCount = 0;

	if (h == NULL)
		return (0);
	temp = h;

	while (temp)
	{
		temp = temp->next;
		nodeCount++;
	}

	return (nodeCount);
}
