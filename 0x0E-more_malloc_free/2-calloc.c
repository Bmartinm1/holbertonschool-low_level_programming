#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates mem for array
*
* @nmemb: numb of elements
* @size: size of element type
*
* Return: a pointer to allocated mem, NULL if nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ar[i] = 0;

	return (ar);
}
