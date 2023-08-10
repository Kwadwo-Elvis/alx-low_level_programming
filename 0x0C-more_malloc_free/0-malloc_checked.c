#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: number of bytes to allocate.
 *
 * Return: pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);

	return (i);
}
