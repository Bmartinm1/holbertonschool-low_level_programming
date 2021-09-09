#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints every element of a list
 * @h: points to list
 *
 * Return: size_t -> number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t nodeCount = 0;

	if (h == NULL)
		return (nodeCount);
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodeCount++;
	}

	return (nodeCount);
}
