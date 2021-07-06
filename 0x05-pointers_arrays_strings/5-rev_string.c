#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	while (s[i])
		i++;

	i -= 1;

	while (len < i)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		len++;
		i--;
	}
}
