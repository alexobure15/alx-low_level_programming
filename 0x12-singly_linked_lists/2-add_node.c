#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning
 * of  list_t list
 *
 * @head: head  of linked list
 *
 * @str: string to be used as a node
 *
 * Return: number of elements printed
 */

	list_t *add_node(list_t **head, const char *str)
	{
		list_t *new;
		unsigned int leng = 0;

		while (str[leng])
			leng++;

		new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);

		new->str = strdup(str);
		new->leng = leng;
		new->next = (*head);
		(*head) = new;

		return (*head);
	}

