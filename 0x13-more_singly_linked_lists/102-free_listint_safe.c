#include <stdio.h>
#include "lists.h"
/**
 * _ma - Function that assigns mem to the linked list
 *
 * @list: list of elements
 *
 * @size: new list size
 *
 * @new: updated  node
 *
 * Return: printee nodes
 */
	listint_t **_ma(listint_t **list, size_t size, listint_t *new)
	{
	listint_t **new_list;
	size_t z;

	new_list = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (z = 0; z < size - 1; z++)
	new_list[z] = list[z];
	new_list[z] = new;
	free(list);

	return (newlist);
	}
/**
 * free_listint_safe - Func that frees a linked list
 * @h: 1st node in a linked list
 * Return: size of freed list
 */
	size_t free_listint_safe(listint_t **h)
	{
		size_t z, num_nod = 0;
		listint_t **list = NULL;
		listint_t *next;

		if (h == NULL || *h == NULL)
			return (num_nod);

		while (*h != NULL)
		{
			for (z = 0; z < num_nod; z++)
			{
				if (*h == list[z])
				{
					*h = NULL;
					free(list);

					return (num_nod);
				}
			}
			num_nod++;
			list = _ra(list, num_nod, *h);
			next = (*h)->next;
			free(*h);
			*h = next;
		}
		free(list);
		return (num_nod);
	}
