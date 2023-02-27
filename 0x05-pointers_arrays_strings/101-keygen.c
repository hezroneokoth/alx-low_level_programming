#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
	char password[7];
	int i, ascii;

	srand(time(NULL));

	for (i = 0; i < 6; i++)
	{
		ascii = rand() % 77 + 48;
		if (ascii >= 58 && ascii <= 64)
			ascii += 7;
		else if (ascii >= 91 && ascii <= 96)
			ascii += 6;
		password[i] = ascii;
	}
	password[6] = '\0';

	printf("%s\n", password);

	return (0);
}
