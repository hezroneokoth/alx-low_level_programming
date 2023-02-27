#include "main.h"

/**
 * _puts -  function that prints a string, followed by a new line, to stdout
 * @str: the character
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
