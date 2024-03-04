#include "sort.h"

/**
 * insertion_sort_list - the sorting Algorithm
 * @list:  linked list, doubly
 * This is an insertion - algorithm for insertion
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *to_be_sorted, *unsorted;

	if (!list || !(*list) || !(*list)->next)
		return;

	unsorted = (*list)->next;

	while (unsorted)
	{
		to_be_sorted = unsorted;
		unsorted = unsorted->next;

		while (to_be_sorted->prev && (to_be_sorted->prev->n > to_be_sorted->n))
		{
			to_be_sorted->prev->next = to_be_sorted->next;
			if (to_be_sorted->next)
				to_be_sorted->next->prev = to_be_sorted->prev;

			to_be_sorted->next = to_be_sorted->prev;
			to_be_sorted->prev = to_be_sorted->prev->prev;

			to_be_sorted->next->prev = to_be_sorted;

			if (to_be_sorted->prev)
				to_be_sorted->prev->next = to_be_sorted;
			else
				*list = to_be_sorted;

			print_list(*list);
		}
	}
}
