#include <stdio.h>
/**
 * main - Prints all the numbers of base 16
 * in lowercase
 * followed by a new line.
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;
	char hex_digits[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hex_digits[i]);
	}
	putchar('\n');
	return (0);
}
