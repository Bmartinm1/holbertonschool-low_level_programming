#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_alphabet - prints the alphabet
*
* Return: always 0
**/
void print_alphabet(void)
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
