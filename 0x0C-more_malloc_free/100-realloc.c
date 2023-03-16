#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memmory block using malloc and free.
 * @ptr: pointer to the mem previously allocated with call to malloc(old_size)
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: Ptr if new_size == old_size;
 * Allocate new memory if ptr === NULL and return NULL;
 * Do no initialize new memory if new_size > old_size;
 * NULL if new_size == 0 and ptr is not NULL;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}

	free(ptr);

	return (new_ptr);
}
