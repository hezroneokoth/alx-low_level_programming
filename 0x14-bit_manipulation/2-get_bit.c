#include "main.h"

/**
 * git_bit - function that returns the value of a bit at a given index
 * @n: the number to search for the bit
 * @index: the index of the bit to get starting from 0
 *
 * Return: the value of the bit at index index, OR -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
