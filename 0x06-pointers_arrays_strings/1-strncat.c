#include "main.h"
/**
 * *_strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be used from src
 * Return: pointer to the resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
