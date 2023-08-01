#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Func that frees a linked list
 *
 * @head: linked list head
 *
 * Return: void
 */

	void free_listint(listint_t **head)
	{
		listint_t *t;

		while (head)
		{
			free(head);
			t = head->next;
			head = t;
		}
	}

