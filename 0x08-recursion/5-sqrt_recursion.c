#include "main.h"

int sqrt_helper(int num, int root);
int _sqrt_recursion(int n);

/**
 * sqrt_helper - finds the square root recursively
 * @num: input number
 * @root: possible root
 *
 * Return: natural square root, or -1 if not found
 */
int sqrt_helper(int num, int root)
{
	if ((root * root) == num)
		return (root);
