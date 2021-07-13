#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}
