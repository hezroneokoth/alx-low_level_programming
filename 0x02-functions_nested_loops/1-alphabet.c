#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * followed by a new line.
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		putchar(la);

	_putchar('\n');
}
