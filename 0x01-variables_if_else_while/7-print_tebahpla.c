#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 * followed by a new line.
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
