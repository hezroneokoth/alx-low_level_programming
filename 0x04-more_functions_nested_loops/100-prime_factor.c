#include <stdio.h>
#include "main.h"

/**
 * prime - prints the largest prime factor of the number 612852475143
 * followed by a new line.
 *
 * Return: 0
 */
int is_prime(long num)
{
	long i;

	if (num < 2)
	{
		return 0;
	}

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	
	return (1);
}

int main(void)
{
	long num = 612852475143;
	long largest_factor = 2;
	long i;

	while (num > largest_factor)
	{
		if (num % largest_factor == 0)
		{
			num /= largest_factor;
		} else
		{
			do
			{
				largest_factor++;
			} while (!is_prime(largest_factor));
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}
