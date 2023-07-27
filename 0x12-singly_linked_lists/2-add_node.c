#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - func that returns the len of a strg.
*
* @s : string character
*
* Return: Always (Success)
*/

	int _strlen(const char *s)

	int _strlen(const char *s)
	{
		int i = 0;


		while (s[i] != '\0')
		{
			i++;
		}
		return (i);
	}

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
		list_t *add;

		add = malloc(sizeof(list_t));
		if (add == NULL)
		return (NULL);
		add->str = strdup(str);


		add->len = _strlen(str);
		add->next = *head;
		*head = add;


		return (add);
	}
