#include <stdio.h>
#include <stdlib.h>
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
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", x);
		return (0);
	}

	else
	{
		printf("Error\n");

		return (1);
	}
}
