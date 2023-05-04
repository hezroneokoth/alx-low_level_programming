#include "main.h"
/**
 * flipbits - function returns the bits you would need to get
 * you from one number to another
 * @n: the 1st number
 * @m: the 2nd number
 *
 * Return: the no of bits that needs to be flipped from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
