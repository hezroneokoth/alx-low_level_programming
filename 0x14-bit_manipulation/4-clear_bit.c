#include "main.h"
/**
 * clear_bit - function sets the value of a bit to 0 at a certain index
 * @n: pointer to the number
 * @index: index of the bit to be set
 *
 * Return: 1 on success, OR -1 if an error occurs
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
