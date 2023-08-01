#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - functio that deletes a  nod at
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
		listint_t *tp = *head;
		listint_t *curr = NULL;

		if (*head == NULL)
			return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			free(tp);
			return (1);
		}

		while (j < index - 1)
		{
			if (!tp || !(tp->next))
				return (-1);
			tp = tp->next;
			j++;
		}


		curr = tp->next;
		tp->next = curr->next;
		free(curr);

		return (1);
	}


