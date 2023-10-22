#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of ints
 *      in ascending order by insertion sorting algorthim
 * @list: the given doubly linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *before, *node;

	if (!list)
		return;
	head = *list;
	while ((head = head->next))
	{
		node = head;

		while (node->prev && (node->n < node->prev->n))

		{
			before = node->prev;
			if (node->next)
				node->next->prev = before;
			if (before->prev)
				before->prev->next = node;
			else
				*list = node;
			before->next = node->next;
			node->prev = before->prev;
			node->next = before;
			before->prev = node;
			print_list(*list);

		}

	}
}
