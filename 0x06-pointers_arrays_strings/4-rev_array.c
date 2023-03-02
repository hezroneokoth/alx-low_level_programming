#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of elements in array a
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
