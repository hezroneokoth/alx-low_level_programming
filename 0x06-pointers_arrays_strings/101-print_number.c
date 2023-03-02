#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: the integer
 * Return: Always 0
 */
void print_number(int n)
{
	int digits = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while ((n / digits) >= 10)
	{
		digits *= 10;
	}
	while (digits > 0)
	{
		_putchar((n / digits) % 10 + '0');
		digits /= 10;
	}
}
