#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 *
 * @h: type of linked list to print
 *
 * Return: nodes printed
 */

	size_t print_listint(const listint_t *h)
	{
		size_t nnod = 0;

		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			nnod++;
		}

		return (nnod);
	}

