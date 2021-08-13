#include "holberton.h"

/**
 * binary_to_uint - converts binary string to uint
 * @b: binary string
 *
 * Return: Converted number on success, 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;
	int pwr = 1;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '1')
			n += pwr;
		i++;
		pwr *= 2;
	}

	return (n);
}
