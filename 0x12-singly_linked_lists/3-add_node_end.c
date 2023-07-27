#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @h: linked list head
 *
 * @str: string to be used as a node
 *
 * Return: number of elements printed
 */

	list_t *add_node_end(list_t **h, const char *str)
	{
		size_t n;
		list_t *temp, *new;

		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);

		for (n = 0; str[n]; n++)
			;

		new->len = n;
		new->next = NULL;
		temp = *h;

		if (temp == NULL)
		{
			*h = new;
		}
		else
		{
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new;
		}

		return (*h);
	}
