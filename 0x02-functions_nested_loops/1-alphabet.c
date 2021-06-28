#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program entry point
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
