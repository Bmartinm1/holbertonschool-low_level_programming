#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates through an array
 * @array: an array
 * @size: size of the array
 * @action: pointer to function being used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t itr;

	if (action && array)
		for (itr = 0; itr < size; itr++)
			action(array[itr]);
}
