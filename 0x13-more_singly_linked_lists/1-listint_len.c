#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function that rtrns  number of
 * elements in a linked list
 *
 * @h: type of linked list to print
 *
 * Return: num of elements printed
 */

	size_t listint_len(const listint_t *h)
	{
		size_t nnod = 0;

		while (h)
		{
			h = h->next;
			nnod++;
		}

		return (nnod);
	}

