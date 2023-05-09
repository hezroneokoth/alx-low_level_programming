#include "main.h"
/**
 * print_binary - function prints the binary rep of a number
 * @n: the number to print in binary form
 */
void print_binary(unsigned long int n)
{
	int bitcount = 0;
	unsigned long int mask = 1;

	while ((mask << 1) < n)
		mask <<= 1;
	while (mask != 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
		bitcount++;
	}
	if (bitcount == 0)
		_putchar('0');
}
