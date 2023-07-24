#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The input string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Move back to the last valid character in the string (before '\0'). */
	s--;

	/* Start from the last character and print in reverse order. */
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

