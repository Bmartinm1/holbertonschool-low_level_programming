#include "holberton.h"

/**
 * factorial - returns factorial of a number
 * @n: number
 * Return: 0
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}
