#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: pointer to compare function
 *
 * Return: index of the first element for which the cmp function does not return 0, if no element matches, return -1, if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t elem;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[elem]) != 0)
				return elem;
		}
	}
	return (-1);
}
