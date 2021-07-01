#include "holberton.h"
/**
 * _isupper - checks character for case
 * @c: character to be checked
 * Return: 1 if upper, 0 if lower
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
