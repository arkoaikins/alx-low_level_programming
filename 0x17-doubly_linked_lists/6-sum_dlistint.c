#include "lists.h"

/**
 * sum_dlistint - computes the sum of data in a dlinked list
 * @head: pointer to head node of list
 *
 * Return: sum of all data
 *         otherwise return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
