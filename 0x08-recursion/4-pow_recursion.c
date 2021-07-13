#include "holberton.h"

/**
 * _pow_recursion - returns value of a number raised to the power of second
 * @x: number
 * @y: power of
 * Return: x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
