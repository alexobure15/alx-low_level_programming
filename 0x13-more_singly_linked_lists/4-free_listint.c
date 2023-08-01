#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Func that frees a linked list
 *
 * @head: linked list head
 */

	void free_listint(listint_t **head)
	{
		listint_t *tmp;

		while (head)
		{
			free(head);
			tmp = head->next;
			head = tmp;
		}
	}

