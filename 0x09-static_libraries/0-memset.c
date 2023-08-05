#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 *
 * @s: the starting address of the memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int g = 0;

	for (; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}
