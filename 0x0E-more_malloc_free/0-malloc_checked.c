#include <stdlib.h>

/**
 * malloc_check - allocates memory using malloc
 * @b: memory amount
 * Return : void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *tired;

	tired = malloc(b);
	
	if (tired != NULL)
	{
		return (tired);
	}
	exit(98);
}
