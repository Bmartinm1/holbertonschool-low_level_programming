#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _islower - determines whether or not variable is lowercase
*
* c - target of the case checker
*
* Return: lowercase (1), not lowercase (0)
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
