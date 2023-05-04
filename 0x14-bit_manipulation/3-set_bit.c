#include "main.h"
/**
 * set_bit - function sets the value of a bit to 1 at a certain index
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 on success, OR -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);

	return (1);
}
