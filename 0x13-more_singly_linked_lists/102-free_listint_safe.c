#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The size of the list that was free'd. Function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	if (h == NULL)
		return (0);

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			count++;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		count++;
		*h = tmp;
	}

	*h = NULL;
	return (count);
}
