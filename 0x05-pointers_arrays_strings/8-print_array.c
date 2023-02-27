#include "main.h"

/**
 * print_array - Prints n elements of an integer array.
 * @a: Pointer to an integer array.
 * @n: Number of elements to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
