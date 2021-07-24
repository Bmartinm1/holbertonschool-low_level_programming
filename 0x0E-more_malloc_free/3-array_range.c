#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Create int array
 * @min: Smol number
 * @max: Thicc number
 * Return: Pointer to new int array
 */

int *array_range(int min, int max)
{
	int *i, j;

	int size = (max - min + 1);

	if (min > max)
		return (NULL);

	tired = malloc(sizeof(int) * size);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		tired[j] = min++;
	}
	return (i);
}
