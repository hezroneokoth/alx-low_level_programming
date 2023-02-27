#include "main.h"
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
	char password[12];
	int i;
	const char valid_chars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = valid_chars[rand() % 62];
	}
	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
