#include "sort.h"

/**
 * selection_sort - Selection sort algorithm function
 *
 * @array: Array to be selection sorted
 * @size: Size of array to be sorted
 *
 * Return: Always VOID
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, idx;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		temp = array[i];
		for (j = (i + 1); j < size; j++)
		{
			if (temp > array[j])
			{
				temp = array[j];
				idx = j;
			}
		}
		if (idx != i)
		{
			array[idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
