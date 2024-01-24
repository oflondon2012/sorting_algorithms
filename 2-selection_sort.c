#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in assending order using selection sort algorithm
 * @array: the array
 * @size: thae size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, idx;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[idx])
				idx = j;

		if (idx != i)
		{
			k = array[i];
			array[i] = array[idx];
			array[idx] = k;

			print_array(array, size);
		}
	}
}
