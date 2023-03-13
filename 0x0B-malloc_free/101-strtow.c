#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */
static int count_words(char *str)
{
	int count = 0, i = 0;

	while (*(str + i))
	{
		while (*(str + i) && *(str + i) == ' ')
			i++;
		if (*(str + i))
			count++;
		while (*(str + i) && *(str + i) != ' ')
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str is NULL, str is "", or memory allocation fails - NULL,
 * otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, k, len, wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = count_words(str);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && *str == ' ')
			str++;
		if (*str == '\0')
			break;

		len = 0;
		while (*(str + len) && *(str + len) != ' ')
			len++;

		*(words + i) = malloc((len + 1) * sizeof(char));
		if (*(words + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(words + j));
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			*(*(words + i) + k) = *(str + k);
		*(*(words + i) + k) = '\0';
		i++;
		str += len;
	}
	*(words + i) = NULL;
	return (words);
}
