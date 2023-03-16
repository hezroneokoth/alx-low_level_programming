#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: number of bytes in the array
 *
 * Return: NULL if size or nemb is 0; or Null if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		/**
		 * zero out the memory
		 */
		char *p = ptr;
		unsigned int i;

		for (i = 0; i < nmemb * size; i++)
			*(p + i) = 0;
	}

	return (ptr);
}
