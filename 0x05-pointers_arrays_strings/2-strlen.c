#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 * Return: always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		s++;
		length++;
	}

	return (length);
}
