#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Func that frees a linked list
 *
 * @head: linked list head
 *
 * Return: void
 */

	void free_listint2(listint_t **head)
	{
		listint_t *t;

		if (head == NULL)
			return;

		while (*head)
		{
			free(*head);
			t = (*head)->next;
			*head = t;
		}

		*head = NULL;
	}

