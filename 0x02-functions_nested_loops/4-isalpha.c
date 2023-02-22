#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the character
 *
 * Return: 1 if character is a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
