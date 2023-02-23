#include <stdio.h>
#include "main.h"

#define FIZZ 3
#define BUZZ 5

/**
 * main - Prints the numbers from 1 to 100, followed by a new line
 * But instead of printing the number
 * print 'Fizz' for multiples of 3
 * 'Buzz' for multiples of 5
 * and 'FizzBuzz' for multiples of both 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % FIZZ == 0 && number % BUZZ == 0)
		{
			printf("FizzBuzz ");
		}
		else if (number % FIZZ == 0)
		{
			printf("Fizz ");
		}
		else if (number % BUZZ == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}

	printf("\n");
	return (0);
}
