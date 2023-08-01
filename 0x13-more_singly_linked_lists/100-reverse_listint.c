#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 *
 * @head: 1st node in a linked list
 *
 * Return: ptr to the 1st node of the list reversed
 */

	listint_t *reverse_listint(listint_t **head)
	{
		listint_t *prevs;
		listint_t *next;

		if (head == NULL || *head == NULL)
			return (NULL);

		prevs = NULL;
		while (*head != NULL)
		{
			next = (*head)->next;
			(*head)->next = prevs;
			prevs = *head;
			*head = next;
		}
		(*head) = prevs;

		return (*head);
	}
