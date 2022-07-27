#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: pointer to the head of a doubly linked list
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	if (*list)
	{
		listint_t *current = *list, *hole;
		size_t k = 0, swapped, i, j;

		while (current)
		{
			k++;
			current = current->next;
		}
		for (i = 1; i <= k; i++)
		{
			current = *list;
			swapped = 0;
			for (j = 1; j <= (i - 1); j++)
				current = current->next;
			hole = current;
			while (hole && hole->prev && ((hole->prev)->n > current->n))
			{
				if (!swapped)
				{
					(hole->prev)->next = hole->next;
					(hole->next)->prev = hole->prev;
					swapped = 1;
				}
				hole = hole->prev;
			}
			if (swapped)
			{
				current->next = hole;
				current->prev = hole->prev;
				hole->prev = current;
				if (current->prev)
					(current->prev)->next = current;
				else
					*list = current;
			}
			print_list(*list);
		}
	}
}
