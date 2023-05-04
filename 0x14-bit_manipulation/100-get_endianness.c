#include "main.h"
/**
 * get_endianness - function that checks the endianness of the sys
 *
 * Return: 0 if big endian, OR 1 if small endian
 */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *) &num;

	return ((int) (*c));
}
