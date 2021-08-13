#include "lists.h"

/**
 * insert_nodeint_at_index - add new node at idx
 * @head: head of list
 * @idx: position of new node
 * @n: node data
 *
 * Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int local_index = 1;
	listint_t *node;
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}


	while (local_index < idx)
	{
		temp = temp->next;

		if (!temp)
			return (NULL);

		local_index++;
	}

	node->next = temp->next;
	temp->next = node;

	return (node);
}
