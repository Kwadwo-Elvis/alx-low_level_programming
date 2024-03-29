#include "main.h"
/**
 * _strncat - concatenates two strings, at most n bytes from src
 *@dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
