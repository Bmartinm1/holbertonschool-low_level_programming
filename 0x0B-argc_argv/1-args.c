#include <stdlib.h>
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
	if (argc && argv)
		printf("%d\n", argc - 1);

	return (0);
}
