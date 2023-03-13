#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: dupstr if successful; NULL if string is absent
 */

char *_strdup(char *str)
{
	char *dup_str;
	int str_len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = 0;
	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	dup_str = malloc((str_len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_len; i++)
	{
		*(dup_str + i) = *(str + i);
	}
	*(dup_str + str_len) = '\0';

	return (dup_str);
}
