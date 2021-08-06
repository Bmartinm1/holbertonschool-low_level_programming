#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: pointer to list_t
 *
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;
	const list_t *temp_list = h;

	while (temp_list)
	{
		if (!temp_lest->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp_list->len, temp_list->str);
		nodes++;
		temp_list = temp_list->next;
	}
	return (nodes);
}
