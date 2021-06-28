#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program entry point
*
* print_alphabet - prints the alphabet
*
* Return: always 0
**/
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
