#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @head: linked list head
 *
 * Return: number of elements printed
 */

	size_t print_list(const list_t *head)
	{
		size_t z = 0;

		while (head)
		{
			if (!head->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", head->len, head->str);
			head = head->next;
			z++;
		}

		return (z);
	}

