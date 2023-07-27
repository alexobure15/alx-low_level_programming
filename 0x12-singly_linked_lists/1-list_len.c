#include "lists.h"

/**
 * list_len - returns the number of elements in
 * a linked list_t list
 *
 * @header: pointer to the list_t list
 *
 * Return: number of elements  printed
 */

	size_t list_len(const list_t *header)
	{
		size_t m = 0;

		while (header)
		{
			m++;
			header = header->next;
		}
		return (m);
	}

