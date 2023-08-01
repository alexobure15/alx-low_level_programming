#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Func that adds a new nod at
 * the beginning of a linked list
 *
 * @head: 1st node in a linked list
 *
 * @n: num of elems
 *
 * Return: return adress to new elems otherwise  NULL
 */

	listint_t *add_nodeint(listint_t **head, const int n)
	{

		listint_t *new;

		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;

		*head = new;

		return (*head);
	}

