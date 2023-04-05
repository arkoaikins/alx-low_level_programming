#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head node's data (n(which is (first->n)).
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	first = *head;
	i = first->n;
	*head = first->next;

	free(first);

	return (i);
}





