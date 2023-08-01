#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Func that adds a new nod at
 * the end  of a linked list
 *
 * @head: 1st node in a linked list
 *
 * @n: num of elems
 *
 * Return: return adress to new elems otherwise  NULL
 */

	listint_t *add_nodeint_end(listint_t **head, const int n)
	{
		listint_t *new;
		listint_t *t;

		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}

		else
		{
			t = *head;
			while (t->next != NULL)
			{
				t = t->next;
			}
			t->next = new;

			return (*head);
		}
	}
