#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer, head of list
 */

void free_listint(listint_t *head)
{
	listint_t *list, *next;

	list = head;

	while (list)
	{
		next = list->next;
		free(list->n);
		free(list);
		list = next;
	}
}
