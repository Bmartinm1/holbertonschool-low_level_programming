#include "lists.h"

/**
 * add_node - adds new node at beginning of list_t list
 * @str: data that needs to be duplicated
 * @head: pointer to start of list
 *
 * Return: address of new element on success, NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int length = 0;
	list_t *secondList

	secondList = malloc(sizeof(list_t));

	if (secondList == NULL)
		return (NULL)

	dup = strdup(str);

	if (dup == NULL)
	{
		free(secondList);
		return (NULL)
	}

	while (str[length])
		length++;

	secondList->str = dup;
	secondList->len = length;
	secondList->next = *head;

	*head = secondList;

	return (secondList);	
}
