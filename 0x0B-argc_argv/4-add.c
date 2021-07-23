#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - promgram entry
 * @argc: num of args
 * @argv: value of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int result;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if )argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atio(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
