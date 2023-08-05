#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: String to calculate the length of.
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
