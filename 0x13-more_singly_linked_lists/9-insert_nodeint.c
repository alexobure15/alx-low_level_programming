#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new nod at
 * a given psn in a linked list
 *
 * @head: 1st node in a linked list
 *
 * @n: elements  to be inserted
 * @idx: index where the new node is to be inserted
 *
 * Return: return adress to new elems otherwise  NULL
 */

	listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
	{
		listint_t *new;
		unsigned int k;
		listint_t *t = *head;

		new = malloc(sizeof(listint_t));
		if (!new || !head)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}


		for (k = 0; t && k < idx; k++)
		{
			if (k == idx - 1)
			{
				new->next = t->next;
				t->next = new;
				return (new);
			}
			else
				t = t->next;
		}

		return (NULL);
	}

