#include "lists.h"

/**
 * pop_listint - deletes head and returns head node's data
 * @head: pointer, head
 *
 * Return: head node data, if list is empty, return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	if (!*head)
		return (0);

	list = *head;
	*head = (*head)->next;
	n = list->n;

	free(list);

	return (n);
}
