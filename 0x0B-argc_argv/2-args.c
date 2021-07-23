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
	{
		while (*argv)
		{
			printf("%s\n", *argv);
			argv++;
		}

	return (0);
}
