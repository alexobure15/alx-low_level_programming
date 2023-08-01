#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listp2 - Func that frees a linked list
 * @head: 1st node in a linked list
 * Return: void
 */
	void free_listp2(listp_t **head)
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
 * free_listint_safe - Func that frees a linked list
 * @h: 1st node in a linked list
 * Return: size of freed list
 */
	size_t free_listint_safe(listint_t **h)
	{
		listp_t *ptr, *add, *new;
		size_t num = 0;
		listint_t *current;

		ptr = NULL;
		while (*h != NULL)
		{
			new = malloc(sizeof(listp_t));

			if (new == NULL)
				exit(98);

			new->p = (void *)*h;
			ptr = new;
			new->next = ptr;

			add = ptr;
			while (add->next != NULL)
			{
				add = add->next;

				if (*h == add->p)
				{
					*h = NULL;
					free_listp2(&ptr);
					return (num);
				}
			}
			current = *h;
			*h = (*h)->next;
			free(current);
			num++;
		}

		*h = NULL;
		free_listp2(&ptr);
		return (num);
	}
