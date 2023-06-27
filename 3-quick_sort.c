#include "sort.h"

void quick_sort_a(int *array, int lo, int hi, size_t *p_s);
int partition(int *array, int lo, int hi, size_t *p_s);
void swap(int *a, int *b);

/**
 * quick_sort - Quick sort algorithm function
 *
 * @array: Array to be quick sorted
 * @size: Size of the array to be sorted
 *
 * Return: Always VOID
 */

void quick_sort(int *array, size_t size)
{
	size_t *p_size = &size;

	if (size < 2)
		return;

	quick_sort_a(array, 0, size - 1, p_size);
}

/**
 * quick_sort_a - QS Algorithm
 *
 * @array: Array to be sorted
 * @lo: Lower bound
 * @hi: Higher bound
 * @p_s: Pointer to size
 *
 * Return: Always VOID
 */

void quick_sort_a(int *array, int lo, int hi, size_t *p_s)
{
	int part;

	if (lo < hi)
	{
		part = partition(array, lo, hi, p_s);

		quick_sort_a(array, lo, (part - 1), p_s);
		quick_sort_a(array, (part + 1), hi, p_s);
	}
}

/**
 * partition - Array partitioning function
 *
 * @array: Array to be quick sorted
 * @lo: First/ left side of array
 * @hi: Last/ right side of array
 * @p_s: Pointer to size
 *
 * Return: Always INTEGER
 */

int partition(int *array, int lo, int hi, size_t *p_s)
{
	int i, j, pivot;

	pivot = array[hi];
	j = lo - 1;

	for (i = lo; i <= (hi - 1); i++)
	{
		if (array[i] < pivot)
		{
			j++;
			swap(&array[j], &array[i]);
		}
	}
	swap(&array[j + 1], &array[hi]);
	print_array(array, *p_s);

	return (j + 1);
}

/**
 * swap - Swap function
 *
 * @a: First number to be swapped
 * @b: Second number to be swapped
 *
 * Return: Always VOID
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
