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
		listint_t *ptr;
		listint_t *previous;

		ptr = head;
		previous = head;
		while (head && ptr && ptr->next)
		{
			head = head->next;
			ptr = ptr->next->next;

			if (head == ptr)
			{
				head = previous;
				previous =  ptr;
				while (1)
				{
				ptr = previous;
					while (ptr->next != head && ptr->next != previous)
					{
						ptr = ptr->next;
					}
					if (ptr->next == head)
						break;

					head = head->next;
				}
				return (ptr->next);
			}
		}
		return (NULL);
	}
