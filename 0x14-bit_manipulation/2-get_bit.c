#include "main.h"
/**
 * get_bit - function returns the value of a bit at a certain index
 * @n: the number for the bit
 * @index: index of the bit starting from 0
 *
 * Return: value of the bit at index index, 0R -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
