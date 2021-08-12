#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list (listint_t)
 * @head: points to head of list
 * @n: data being duplicated
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));

	if (newlist == NULL)
		return (NULL);

	newlist->next = *head;
	newlist->n = n;

	*head = newlist;

	return (newlist);
}
