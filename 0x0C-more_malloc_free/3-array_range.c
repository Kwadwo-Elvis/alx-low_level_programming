#include "main.h"

/**
 * array_range: creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int len, i;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	if (!p)
		return (NULL);

	for (i = 0, i < len, i++)

	p[i] = min++;
	return (p);
}
