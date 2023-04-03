#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Double pointer to the head node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded OR -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = (*head)->next;
	for (i = 1; current != NULL && i <= index; i++)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
	}

	return (-1);
}
