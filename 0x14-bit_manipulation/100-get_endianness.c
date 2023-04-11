#include "main.h"

/**
 * get_endianness - function checks the endianness of the system
 *
 * Return: 0 if big endian, OR 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *) &num;

	return ((int) (*c));
}
