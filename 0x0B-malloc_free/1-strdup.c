#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new_str;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new_str = malloc(sizeof(char) * (length + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		new_str[i] = str[i];
	return (new_str);
}
