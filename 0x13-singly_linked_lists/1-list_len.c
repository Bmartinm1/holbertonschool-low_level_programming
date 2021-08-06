#include "lists.h"

/**
 * list_len - prints the number of elements linked in the list_t list
 * @h: pointer to list
 *
 * Return: number of linked nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;
	const list_t *temp_list = h;

	while (temp_list)
	{
		printf("[%d]\n", temp_list->len);
		nodes++;
		temp_list = temp_list->next;
	}
	return (nodes);
}	
