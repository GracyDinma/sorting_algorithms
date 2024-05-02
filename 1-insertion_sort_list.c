#include "sort.h"

/**
 * swap_nodes - swap two nodes in a listint_t doubly-linked list.
 * @list: Pointer to the head of the doubly-linked list.
 * @n1: Pointer to the first node to be swapped.
 * @n2: Second node to be swapped.
 */
void swap_nodes(listint_t **list, listint_t *n1, listint_t *n2)
{
	if (n1->prev != NULL)
		n1->prev->next = n2;
	 else
                *list = n2;
	if (n2->next != NULL)
		n2->next->prev = n1;
	n1->next = n2->next;
	n2->prev = n1->prev;
	n1->prev = n2;
	n2->next = n1;
}



/**
 * insertion_sort_list - sort a doubly linked list
 * @list: Pointer to the head of the doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	curr = (*list)->next;
	while (curr != NULL)
	{
		prev = curr->prev;
		while (prev != NULL && prev->n > curr->n)
		{
			swap_nodes(list, prev, curr);
			print_list(*list);
			prev = curr->prev;
		}
		curr =curr->next;
	}

}
