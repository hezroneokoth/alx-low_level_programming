#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i]
			dest[dest_len + i] = '\0';
	return (dest);
}
