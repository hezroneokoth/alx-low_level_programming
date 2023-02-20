#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * followed by a new line.
 *
 * Returns: 0 Always
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

