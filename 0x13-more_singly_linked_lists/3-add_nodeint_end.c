#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head node of the listint_t list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new node; NULL if mem allocation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
		last = last->next;

	last->next = new;
	return (new);
}
