#include "main.h"

/**
 * _strchr - Entry point of the program
 * @s: The string to search
 * @c: The character to search for
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
