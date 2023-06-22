#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

int _putchar(char c); /* Outputs to stdout */
void print_array(const int *array, size_t size); /* Prints an array of integers */
void print_list(const listint_t *list); /* Prints a list of integers */
void bubble_sort(int *array, size_t size); /* Bubble sort algorithm */
void insertion_sort_list(listint_t **list); /* Insertion sort algorithm */
void selection_sort(int *array, size_t size); /* Selection sort algorithm */
void quick_sort(int *array, size_t size); /* Quick sort algorithm */
void shell_sort(int *array, size_t size); /* Shell sort algorithm */
void cocktail_sort_list(listint_t **list); /* Cocktail shaker sort algorithm */
void counting_sort(int *array, size_t size); /* Counting sort algorithm */
void merge_sort(int *array, size_t size); /* Merge sort algorithm */
void heap_sort(int *array, size_t size); /* Heap sort algorithm */
void radix_sort(int *array, size_t size); /* Radix sort algorithm */
void bitonic_sort(int *array, size_t size); /* Bitonic sort algorithm */
void quick_sort_hoare(int *array, size_t size); /* Quick sort algorithm */

#endif /* SORT_H */
