#include "holberton.h"

/**
 * void swap_int - swaps values of two pointers
 * @a, @b: pointers to values that will be swapped
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
