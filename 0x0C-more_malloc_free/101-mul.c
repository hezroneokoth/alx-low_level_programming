#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two numbers in string format
 * @num1: the first number
 * @num2: the second number
 *
 * Return: a pointer to a string containing the result of the multiplication
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int carry, i, j, k;
	char *result;

	result = malloc(len_result + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_result; i++)
		result[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			k = len_result - i - j - 1;
			carry += (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0');
			result[k] = (carry % 10) + '0';
			carry /= 10;
		}
		if (carry > 0)
			result[k - 1] += carry;
	}

	while (*result == '0' && _strlen(result) > 1)
		result++;

	return (result);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	int i;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
			print_error();
	}

	for (i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
			print_error();
	}

	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);

	return (0);
}
