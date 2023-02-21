#include <stdio.h>

/**
 * main.h
 * main.h - This is the header for _putchar(char c).
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

/**
 * main.c
 * main.c - Prints _putchar
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	/* Write the character to the standard output */
	/* Note: We assume the standard output is the console */
	/* and that it supports ASCII characters */
	asm("movl $4, %eax\n\t"
			"movl $1, %ebx\n\t"
			"int $0x80"
			: /* no output registers */
			: "c"(c)
			: "%eax", "%ebx", "memory");
	return (0);
}

int main(void)
{
	/* Print the desired character and a newline */
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
