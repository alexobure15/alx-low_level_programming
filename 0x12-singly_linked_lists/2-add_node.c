#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of  list_t list
 *
 * @h: head  of linked list
 *
 * @str: string to be used as a node
 *
 * Return: number of elements printed
 */

	list_t *add_node(list_t **h, const char *str)
	{
		list_t *new;
		int j = 0;

		while (str[j])
			j++;

		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->str = strdup(str);
		new->len = j;
		new->next = *h;

		*head = new;

		return (new);
	}
