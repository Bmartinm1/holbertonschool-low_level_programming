#include "holberton.h"

/**
 * swap_int - swaps values of two pointers
 * @a: pointer to value for swap
 * @b: pointer to value for swap
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
