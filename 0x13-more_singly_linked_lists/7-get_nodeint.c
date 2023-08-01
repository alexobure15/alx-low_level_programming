#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Func that returns the nth nod
 * of a linked list
 *
 * @head: 1st node in a linked list
 *
 * @index: node index to return
 *
 * Return: printed node,otherwise  NULL if
 * it doesn't exist
 */

	listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
	{
		listint_t *t = head;
		unsigned int k = 0;

		while (t && k < index)
		{
			t = t->next;
			k++;
		}

		return (t ? t : NULL);
	}

