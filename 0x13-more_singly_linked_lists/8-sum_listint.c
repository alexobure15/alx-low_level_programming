#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Func that returns the sum
 * of all data in a linked list
 *
 * @head: 1st node in a linked list
 *
 * Return: return the sum  otherwise 0 if list
 * is empty
 */

	int sum_listint(listint_t *head)
	{

		listint_t *t = head;
		int sum = 0;

		while (t)
		{

			sum += t->n;
			t = t->next;
		}

		return (sum);
	}


