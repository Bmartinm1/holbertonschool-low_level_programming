#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @str: target string
 * Return: always 0
 */
void print_rev(char *str)
{
	int i;
	int length = 0;

	while (*str != 0)
	{
		length++;
		str++;
	}
	str--;

	while (i >= 0)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n')
}
