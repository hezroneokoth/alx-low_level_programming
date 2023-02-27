#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: Pointer to the string to be converted
 *
 * Return: The integer value of the input string, or 0 if there are no
 * numbers in the string.
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
		{
			break;
		}

		i++;
	}

	return (sign * result);
}
