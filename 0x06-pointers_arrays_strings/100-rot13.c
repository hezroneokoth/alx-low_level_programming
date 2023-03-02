#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: the string
 * Return: Always 0
 */
char *rot13(char *s)
{
	int i, j;
	char *rot13_map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rot13_map[j])
			{
				s[i] = rot13_code[j];
				break;
			}
		}
	}
	return (s);
}
