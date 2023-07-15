#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			for (num3 = num2 + 1; num3 <= 99; num3++)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				putchar(',');
				putchar(' ');

				putchar((num3 / 10) + '0');
				putchar((num3 % 10) + '0');

				if (num1 != 97 || num2 != 98 || num3 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

