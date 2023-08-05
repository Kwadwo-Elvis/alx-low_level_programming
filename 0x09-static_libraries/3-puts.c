#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to print
 * _putchar: prints new line
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
