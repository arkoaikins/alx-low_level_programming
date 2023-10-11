#ifndef SEARCH_H
#define SEARCH_H

/* Data structure for task 12 */

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Data structure for task 13 */
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;



/* prototypes of my functions used */
/* task 0 */
int linear_search(int *array, size_t size, int value);

/* task 1 */
int binary_search(int *array, size_t size, int value);

/* task 7 */
int jump_search(int *array, size_t size, int value);

/* task 9 */
int interpolation_search(int *array, size_t size, int value);

/* task 10 */
int exponential_search(int *array, size_t size, int value);

/* task 11 */
int advanced_binary(int *array, size_t size, int value);

/* task 12 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/* task 13 */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
