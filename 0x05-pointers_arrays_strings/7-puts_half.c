#include "holberton.h"

/**
 * puts_half - writes second half of a string
 * @str: pointer
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int first = 0;

	while (str[i])
		i++;

	if (i % 2 != 0)
		first = ((i + 1) / 2);
	else
		first = i / 2;

	for (j = first; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
