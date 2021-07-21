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
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);

	if (s == NULL || size == 0)
		return (NULL);
	
	else
	{
		for (x = 0; x < size; x++)
			s[x] = c;
	}
	return (s);
}
