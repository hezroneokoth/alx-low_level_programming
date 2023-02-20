#include <stdio.h>

/**
 * main - Prints the aplhabet in lowercase
 * and then in upperercase
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Printing the full alphabet in lowercase");
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	printf("\nPrinting the full alphabet in uppercase");
	for (char c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	printf("\nnew line");
	putchar('\n');
	return (0);
}
