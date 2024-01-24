#include "sort.h"

/**
 * insertion_sort_list - function that sort a doubly kink list of int using
 * insertion sort algorithms
 * @list: address of a pointer to a list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *newnode, *prev_node, *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	newnode = (*list)->next;

	while (newnode != NULL)
	{
		next_node = newnode->next;
		prev_node = newnode->prev;

		while (prev_node != NULL && prev_node->n > newnode->n)
		{
			/* let swa now current and previous */
			if (prev_node->prev != NULL)
				prev_node->prev->next = newnode;
			else
				*list = newnode;

			if (newnode->next != NULL)
				newnode->next->prev = prev_node;

			prev_node->next = newnode->next;
			newnode->prev = prev_node->prev;

			newnode->next = prev_node;
			prev_node->prev = newnode;

			prev_node = newnode->prev;
			print_list(*list);
		}

		newnode = next_node;
	}
}
