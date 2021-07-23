#include <stdio.h>
#include "holberton.h"

/**
 * main - program entry
 * @argc: number of args
 * @argv: arg values
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] is %s\n" i, argv[i]);
	}

	return (0);
}
