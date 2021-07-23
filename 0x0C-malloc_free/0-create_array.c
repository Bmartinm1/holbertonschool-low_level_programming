#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of memory allocation
 * @c: initialization character
 * Return: Null if s or size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (!size)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	for (i = 0, i < size; i++)
		array[i] = c;

	return (array);
}
