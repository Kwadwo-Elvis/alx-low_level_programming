#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: character to check
* Return: 1 if the character is a letter, else 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
