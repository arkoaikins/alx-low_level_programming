#include "lists.h"

/**
 * sum_listint - Computes the sum of all the i
 *               data (n) of a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n) of the list. 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
