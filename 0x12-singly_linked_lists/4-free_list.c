#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @h: linked list head
 *
 * Returns: Always 0 (Success)
 */

	void free_list(list_t *h)
	{
		list_t *temporary;

		while (h != NULL)
		{
			temporary = h->next;
			free(h->str);
			free(h);
			h = temporary;
		}
	}
