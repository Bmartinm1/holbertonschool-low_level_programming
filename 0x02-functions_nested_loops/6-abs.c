#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _abs - computes the absolute value of an integer
* @n: target integer
* Return: absolute value of n
**/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
