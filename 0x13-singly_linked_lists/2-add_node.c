#include "lists.h"

/**
 * add_node - adds new node at beginning of list_t list
 * @head: pointer to head of list
 * @str: data that needs to be duplicated
 *
 * Return: address of new element on success, NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int length = 0;
	list_t *newlist;

	newlist = malloc(sizeof(list_t));

	if (newlist == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(newlist);
		return (NULL);
	}

	while (str[length])
		length++;

	newlist->str = dup;
	newlist->len = length;
	newlist->next = *head;

	*head = newlist;

	return (newlist);	
}
