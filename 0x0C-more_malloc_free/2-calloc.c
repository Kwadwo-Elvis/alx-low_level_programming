#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	p = malloc(total_size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
		p[i] = 0;

	return (p);
}
