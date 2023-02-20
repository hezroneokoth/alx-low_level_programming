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
	puts("Printing the full alphabet in lowercase");
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	puts("\nPrinting the full alphabet in uppercase");
	for (char c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	return (0);
}
