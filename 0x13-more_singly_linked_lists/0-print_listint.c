#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list(count).
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	do {
		printf("%d\n", h->n);
		h = h->next;
		count++;
	} while (h != NULL);
	return (count);
}

/* This code solves the task 0*/

/**
 * i could use while or for loop
 * to solve this task but i choose a do while loop
 * just to practice more with do while loops.
 */
