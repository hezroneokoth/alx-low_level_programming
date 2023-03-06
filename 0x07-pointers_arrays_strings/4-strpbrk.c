#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to look for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s)
	{
		while (*p)
		{
			if (*s == *p++)
			{
				return (s);
			}
		}
		p = accept;
		s++;
	}

	return (NULL);
}
