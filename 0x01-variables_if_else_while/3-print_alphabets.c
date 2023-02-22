#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Printing the full alphabet in lowercase\n");
	for (char C = 'a'; C <= 'z'; c++)
	{
		putchar(c);
	}
	printf("\nPrinting the full alphabet in uppercase\n");
	for (char C = 'A'; C <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
