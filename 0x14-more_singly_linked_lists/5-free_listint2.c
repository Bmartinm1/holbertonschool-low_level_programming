#include "lists.h"

/**
 * free_listint2 - frees listint_t list, sets head = null
 * @head: double pointer, head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	while (head && *head)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}

	head = NULL;
}
