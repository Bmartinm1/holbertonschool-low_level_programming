#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
		i++;

	for (count = 0; count < i; count += 2)
		_putchar(str[count]);
	_putchar('\n');
}
