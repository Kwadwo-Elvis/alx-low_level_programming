#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 *
 * @b: a character pointer to a string containing
 * the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, sum, pow;
	int base;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	base = 2;
	sum = 0;
	pow = 1;

	for (i = len - 1; i > 0; i--)
	{
		if (b[i - 1] == '1')
			sum += pow;
		pow *= base;
	}

	return (sum);
}
