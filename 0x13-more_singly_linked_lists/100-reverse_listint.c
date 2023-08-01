#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 *
 * @head: 1st node in a linked list
 *
 * Return: ptr to the 1st node of the list reversed
 */

	listint_t *reverse_listint(listint_t **head);
	{
		listint_t *previous, *next;

		previous = NULL;
		next = NULL;

		while (*head != NULL)
		{
			next = (*head)->next;
			(*head)->next = previous;
			previous = *head;
			*head = next;
		}

		*head = previous;

		return (*previous);
	}
