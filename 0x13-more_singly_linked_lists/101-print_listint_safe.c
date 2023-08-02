#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - func that prints a linked list
 *
 * @head: 1st node in a linked list
 * Return: number of nodes printed in the list
 */

	size_t print_listint_safe(const listint_t *head);
	{
		const listint_t *tp = NULL;
		const listint_t *len = NULL;
		size_t counter = 0;
		size_t nnod;

		tp = head;
		while (tp)
		{
			printf("[%p] %d\n", (void *)tp, tp->n);
			counter++;
			tp = tp->next;
			len = head;
			nnod = 0;
			while (nnod < counter)
			{
				if (tp == len)
				{
					printf("-> [%p] %d\n", (void *)tp, tp->n);
					return (counter);
				}
				len = len->next;
				nnod++;
			}
			if (!head)
				exit(98);
		}
		return (counter);
	}

