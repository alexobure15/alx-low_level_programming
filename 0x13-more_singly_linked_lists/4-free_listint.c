#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 *
 * @head: linked list that should be freed
 */

	void free_listint(listint_t *head)
	{
		listint_t *tp;

		while (head)
		{
			tp = head->next;
			free(head);
			head = tp;
		}
	}

