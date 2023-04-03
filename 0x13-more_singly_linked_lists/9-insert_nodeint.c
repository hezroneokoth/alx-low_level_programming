#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the head of the linked list.
 * @idx: The index where the new node should be added.
 * @n: The data to be added to the new node.
 *
 * Return: Address of the new node OR NULL if the function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int node_idx = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;

	while (temp_node)
	{
		if (node_idx == (idx - 1))
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		node_idx++;
		temp_node = temp_node->next;
	}

	free(new_node);
	return (NULL);
}
