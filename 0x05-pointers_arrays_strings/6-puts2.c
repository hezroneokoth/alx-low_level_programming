#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: input string
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
