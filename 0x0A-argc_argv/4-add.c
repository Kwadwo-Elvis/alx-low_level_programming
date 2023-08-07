#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if string contains digits
 * @str: string to check
 *
 * Return: 1 if string contains digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int count;
	int num;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		if (!check_if_digits(argv[count]))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[count]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
