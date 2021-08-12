#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t list
 * @head: list head
 * @index: node to return
 *
 * Return: nth node on success, null on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (head)
}
