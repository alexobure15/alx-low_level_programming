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
		size_t num_nods = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);

			num_nods++;
			h = h->next;

		}

		return (num_nods);
	}

