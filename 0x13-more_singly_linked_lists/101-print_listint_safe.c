#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 *      to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(new_size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(old_list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = old_list[i];
	newlist[i] = new_node;
	free(old_list);
	return (new_list);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num_nodes = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		size_t i;

		for (i = 0; i < num_nodes; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num_nodes);
			}
		}
		num_nodes++;
		list = _r(list, num_nodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num_nodes);
}
