#include "lists.h"

/**
 * find_listint_loop - func that finds loop in a linked list
 *
 * @head: 1st node in a linked list
 * Return: node address at the start of loop
 * otherwise NULL if no loop
 */

	listint_t *find_listint_loop(listint_t *head)
	{
		listint_t *s = head;
		listint_t *f = head;

		if (!head)
			return (NULL);

		while (s && f && f->next)
		{
			f = f->next->next;
			s = s->next;
			if (f == s)
			{
				s = head;
				while (s != f)
				{
					s = s->next;
					f = f->next;
				}
				return (f);
			}
		}

		return (NULL);
	}
