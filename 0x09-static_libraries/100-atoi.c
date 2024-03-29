#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	unsigned int res = 0;

	while (s[i] <= '9' && s[i] >= '0')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
