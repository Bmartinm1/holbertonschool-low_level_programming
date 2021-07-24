#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* string_nconcat - will concatenate two strings
*
* @s1: first string
* @s2: second string
* @n: variable set greater or equal to s2
*
* Return: concatenated string or entire string s2 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	if (n < s2len)
		s2len = n;

	s3 = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}

