#include "sort.h"

/**
 * swap_elements - swap two integers in array.
 * @c: first integer to swap.
 * @d: second integer to swap.
 *
 * Description: swap two elements
 */

void swap_elements(int *c, int *d)
{
	int tmp;

	tmp = *d;
	*d = *c;
	*c = tmp;
}

/**
 * bubble_sort -  sort an array of element in an ascending order
 * @array: Array to be sorted.
 * @size: size of the array.
 *
 * Description: print array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n = size;
	bool sort = false;

	if (array == NULL || size < 2)
		return;
	while (sort == false)
	{
		sort = true;
		for (i = 0; i < n - i; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_elements(array + i, array + i + 1);
				print_array(array, size);
				sort = false;
			}
		}
		n--;
	}
}
