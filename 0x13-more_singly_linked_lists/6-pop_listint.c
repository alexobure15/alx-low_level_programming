#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Func that deletes the head  nod
 * of a linked list
 *
 * @head: 1st node in a linked list
 *
 * Return: return data of the head node otherwise 0
 */

	int pop_listint(listint_t **head)
	{
		listint_t *t;
		int nnod;

		if (!head || !*head)
			return (0);

		nnod = (*head)->n;
		free(*head);
		t = (*head)->next;
		*head = t;

		return (nnod);

	}

