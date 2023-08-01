#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listp - frees a linked list
 *
 * @head: 1st node in a linked list
 * Return: void
 */
	void free_listp(listp_t **head)
	{
		listp_t *current;
		listp_t *tp;

		if (head != NULL)
		{
			current = *head;
			while ((tp = current) != NULL)
			{
				current = current->next;
				free(tp);
			}
			*head = NULL;
		}
	}

/**
 * print_listint_safe - func that prints a linked list
 *
 * @head: 1st node in a linked list
 * Return: number of nodes printed in the list
 */

	size_t print_listint_safe(const listint_t *head);
	{
		size_t num = 0;
		listp_t *ptr, *add, *new;

		ptr = NULL;

		while (head != NULL)
		{
			new = malloc(sizeof(listp_t));

			if (new == NULL)
				exit(98);

			new->p = (void *)head;
			new->next = ptr;
			ptr = new;

			add = ptr;

			while (add->next != NULL)
			{
				add = add->next;

				if (head == add->p)
				{
					printf("-> [%p] %d\n", (void *)head, head->n);
					free_listp(&ptr);
					return (num);
				}
			}
			head = head->next;
			printf("[%p] %d\n", (void *)head, head->n);
			num++;
		}

		free_listp(&ptr);
		return (num);
	}
