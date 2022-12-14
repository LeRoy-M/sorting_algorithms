#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: array of integers
 * @size: size of array
 *
 * Return: Always void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, k, temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (k = 0; k < size; k++)
				{
					printf("%d", array[k]);
					if (k != (size - 1))
						printf(", ");
					else
						printf("\n");
				}
			}
		}
	}
}
