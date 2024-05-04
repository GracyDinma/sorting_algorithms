#include "sort.h"

/**
 * swap - swap two elements
 * @c: First pointer to swap
 * @d: Second pointer to be swapped.
 *
 */
void swap(int *c, int *d)
{
	int temp = *c;
	*c = *d;
	*d = temp;
}


/**
 * selection_sort - Sorts an array of integers
 * @array: Array of integers
 * @size: Size of the array.
 *
 * Description: Selectc numbers in ascending order.
 *
 */
void selection_sort(int *array, size_t size)
{

	size_t i, j;
	if (array == NULL || size < 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		size_t min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}

			if (min_idx != i)
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
			}
	}
}
