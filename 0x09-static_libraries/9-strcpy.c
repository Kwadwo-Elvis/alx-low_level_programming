#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Destination string
 * @src: Source string
 *
 * Return: String value
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
