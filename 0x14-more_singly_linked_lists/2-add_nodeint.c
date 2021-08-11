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
	int *dup;
	list_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	dup = intdup(n);

	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = dup;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
