#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes the head  nod
 * of a linked list
 *
 * @head: 1st node in a linked list
 *
 * Return: return data of the head node otherwise 0
 */

	int pop_listint(listint_t **head)
	{
		listint_t *tp;
		int num_nod;

		if (!head || !*head)
			return (0);

		num_nod = (*head)->n;
		tp = (*head)->next;
		free(*head);
		*head = tp;

		return (num_nod);
	}
