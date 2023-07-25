#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array.
 * @a: The array to be printed.
 * @n: The number of elements of the array to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	if (n > 0) /* Avoid printing a comma after the last element if n is 0 */
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");
}
