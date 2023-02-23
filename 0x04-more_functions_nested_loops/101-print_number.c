#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: the integer
 *
 * Return: 0
 */
void print_number(int n)
{
	int digit, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find largest power of 10 that is less than or equal to n */
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Print each digit in n */
	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
	Return(0);
}
