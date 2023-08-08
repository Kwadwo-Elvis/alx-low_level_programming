#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates an array using nested loops.
 * @width: The width input
 * @height: The height input
 *
 * Return: Pointer to the allocated 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = malloc(sizeof(int *) * height);

	if (mat == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		mat[row] = malloc(sizeof(int) * width);

		if (mat[row] == NULL)
		{
			while (row >= 0)
				free(mat[row--]);

			free(mat);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			mat[row][col] = 0;
	}

	return (mat);
}
