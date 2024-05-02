#include "sort.h"

/**
 * swap_elements - swap two integers in array.
 * @c: first integer to swap.
 * @d: second integer to swap.
 *
 * Description: swap two elements
 */

void swap(int *c, int *d)
{
	int temp = *c;
	*c = *d;
	*d = tmp;
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
	size_t i, j, k, n = size;
	bool sort = false;

	if (array == NULL || size < 2)
		return;
	while (sort == false)
	{
		sort = true;
		for (i = 0; i < size - i; i++)
		{
			for (j = 0; j < size -i - 1; j++)
			{
			if (array[j] > array[j + 1])
			{
				swap_elements(array + j, array + j + 1);
				for (k = 0; k < n; k++)
				{
				print_array(array, size);
				sort = false;
			}
			}
			}
		}
	}
}
