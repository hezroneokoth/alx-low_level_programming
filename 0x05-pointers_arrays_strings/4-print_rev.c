#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 * @s: the string
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}
