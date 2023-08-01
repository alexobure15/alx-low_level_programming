#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a linked list
 *
 * @head: linked list header
 */

	void free_listint2(listint_t **head)
	{
		listint_t *tp;

		if (head == NULL)
			return;

		while (*head)
		{
			tp = (*head)->next;
			free(*head);
			*head = tp;
		}

		*head = NULL;
	}
