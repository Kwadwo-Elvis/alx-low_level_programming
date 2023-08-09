#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates program arguments
 * @ac: Integer input
 * @av: Double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[k] = av[i][j];
			k++;
		}

		if (result[k] == '\0')
		{
			result[k++] = '\n';
		}
	}

	return (result);
}
