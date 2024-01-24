#include "sort.h"

/**
 * bubble_sort - function that sorts an array of int in bubble sort algo
 *
 * @array: an array of integers
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, tmp, si;

	for (j = 0; j < size  - 1; j++)
	{
		for (si = 0; si < size - j - 1; si++)
		{
			if (array[si] > array[si + 1])
			{
				tmp = array[si];
				array[si] = array[si + 1];
				array[si + 1] = tmp;

				print_array(array, size);
			}
		}
	}
}
