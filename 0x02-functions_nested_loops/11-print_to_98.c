#include "main.h"

/**
 * print_number - Prints a number digit by digit
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
		}
	}

	print_number(98);
	_putchar('\n');
}

