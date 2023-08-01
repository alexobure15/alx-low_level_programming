#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Func that reverses a linked list
 *
 * @head: 1st node in a linked list
 *
 * Return: ptr to the 1st node of the list reversed
 */

	listint_t *reverse_listint(listint_t **head);
	{
		listint_t *ptr;
		listint_t *num;

		num = NULL;
		ptr = NULL;

		while (*head != NULL)
		{
			num = (*head)->next;
			(*head)->next = ptr;
			ptr = *head;
			*head = num;
		}

		*head = ptr;
		return (*head);
	}
