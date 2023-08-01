#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 *
 * @head: linked list that should be freed  
 */

	void free_listint(listint_t *head)
	{
		listint_t *tmp;

		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}

