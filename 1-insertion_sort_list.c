#include "sort.h"

void sorted_list(listint_t **list, listint_t *new);

/**
 * insertion_sort - Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 *
 * @list: struct
 *
 * Return: Always void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *sort = NULL;
	int k /* ,*tmp */;

	current = *list;
	while (current != NULL)
	{
		temp = current->next;
		current->prev = current->next =NULL;
		sorted_list(&sort, current);
		current = temp;
		*list = sort;

		k = 0;
		while (*list)
		{
			if (k > 0)
				printf(", ");
		}
	}
}

/**
 * sort_list - Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 *
 * @list: struct
 * @new: struct
 *
 * Return: Always void
 */

void sorted_list(listint_t **list, listint_t *new)
{
	listint_t *current;

	if (*list == NULL)
		*list = new;
	else if ((*list)->n >= new->n)
	{
		new->next = *list;
		new->next->prev = new;
		*list = new;
	}
	else
	{
		current = *list;
		while (current->next != NULL && current->next->n < new->n)
			current = current->next;

		new->next = current->next;
		if (current->next != NULL)
			new->next->prev = new;

		current->next = new;
		new->prev = current;
	}
}
