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
	for (int c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	puts("\nPrinting the full alphabet in uppercase\n");
	for (int c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
