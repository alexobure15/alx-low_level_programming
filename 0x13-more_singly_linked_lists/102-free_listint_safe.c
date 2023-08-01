#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Func that frees a linked list
 * @h: 1st node in a linked list
 * Return: size of freed list
 */
	size_t free_listint_safe(listint_t **h)
	{
		size_t leng = 0;
		int i;
		listint_t *tp;

		if (!h || !*h)
			return (0);

		while (*h)
		{
			i = *h - (*h)->next;
			if (i > 0)
			{
				tp = (*h)->next;
				free(*h);
				*h = tp;
				leng++;
			}
			else
			{
				free(*h);
				*h = NULL;
				leng++;
				break;
			}
		}

		*h = NULL;

		return (leng);
	}
