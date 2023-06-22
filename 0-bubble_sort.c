#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm function
 *
 * @array: Array to be bubble sorted
 * @size: Size of array to be sorted
 *
 * Return: Always VOID
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size < 2)
		return;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
