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
	listint_t *current, *temp;

	if (!(*list))
		return;

	current = *list;

	while (current)
	{
		while (current->next && (current->n > current->next->n))
		{
			temp = current->next;
			current->next = temp->next;
			temp->prev = current->prev;

			if (current->prev)
				current->prev->next = temp;

			if (temp->next)
				temp->next->prev = current;

			current->prev = temp;
			temp->next = current;

			if (temp->prev)
				current = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		current = current->next;
	}
}
