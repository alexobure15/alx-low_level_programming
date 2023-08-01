#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Inserts a new nod at
 * a given psn in a linked list
 *
 * @head: 1st node in a linked list
 *
 * @index: index where the node is to be deleted
 *
 * Return: return 1 on Sucess, or -1 on fail
 */

	int delete_nodeint_at_index(listint_t **head, unsigned int index)
	{
		unsigned int j = 0;
		listint_t *t = *head;
		listint_t *curr = NULL;

		if (*head == NULL)
			return (-1);

		if (index == 0)
		{
			free(t);
			*head = (*head)->next;
			return (1);
		}

		while (j < index - 1)
		{
			if (!t || !(t->next))
				return (-1);
			t = t->next;
			j++;
		}


		curr = t->next;
		tp->next = curr->next;
		free(curr);
		return (1);
	}


