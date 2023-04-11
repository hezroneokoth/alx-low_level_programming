#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: the pointer to the number
 * @index: the index of the bit to be set
 *
 * Return: 1 if successful, OR -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}
