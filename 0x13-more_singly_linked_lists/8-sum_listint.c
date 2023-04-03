#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t list
 * @head: head of the linked list
 *
 * Return: sum of the data, OR 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
