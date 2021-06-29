#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_sign - returns 1, 0, -1, and +, 0, and -, depending on the value of n
* @n: the target
* Return: 1, 0, and -1
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
