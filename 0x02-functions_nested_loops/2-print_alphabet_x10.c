#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_alphabet_x10 - prints the alphabet 10 times
*
* Return: always 0
**/
void print_alphabet_x10(void)
{
	int count = 0;
	int alpha;

	while (count < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		count++;
	}
}
