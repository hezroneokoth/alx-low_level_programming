#include "main.h"
/**
 * leet - fucntion that encodes a string into 1337
 * @s: the string
 * Return: Always 0
 */
char *leet(char *s)
{
	int i, j;
	char *leet_map = "AaEeOoTtLl";
	char *leet_code = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet_map[j])
			{
				s[i] = leet_code[j];
				break;
			}
		}
	}
	return (s);
}
