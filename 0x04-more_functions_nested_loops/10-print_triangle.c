#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 i*
 * Return: new line if size is 0 or less
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar("\n");
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
