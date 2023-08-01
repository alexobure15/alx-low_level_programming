#include "lists.h"

/**
 * print_listint - prints all elements of a list
 *
 * @h: type of linked list to print
 *
 * Return: number of nodes printed
 */
	size_t print_listint(const listint_t *h)
	{
		size_t num_nod = 0;

		while (h)
		{
			printf("%d\n", h->n);
			num_nod++;
			h = h->next;
		}

		return (num_nod);
	}

