#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * represented as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer where the function stores the result
 * @size_r: the buffer size
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i = 0, j = 0, k = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	r[k] = '\0';
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		if (k <= 0)
			return (0);
		r[--k] = sum % 10 + '0';
		carry = sum / 10;
	}
	return (r + k);
}
