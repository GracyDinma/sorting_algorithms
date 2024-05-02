#include "sort.h"

/**
 * swap_nodes - swap two nodes in a listint_t doubly-linked list.
 * @list: Pointer to the head of the doubly-linked list.
 * @n1: Pointer to the first node to be swapped.
 * @n2: Second node to be swapped.
 */
void swap_nodes(listint_t *list, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*n1 = n2;
	(*n1)->prev = n2;
}



/**
 * insertion_sort_list - sort a doubly linked list
 * @list: Pointer to the head of the doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *item, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (item = (*list)->next; item != NULL; item = tmp)
	{
		tmp = item->next;
		insert = item->prev;
		while (insert != NULL && item->n < insert->n)
		{
			swap_nodes(tmp, &insert, item);
			print_list((const listint_t *)*list);
		}
	}

}
