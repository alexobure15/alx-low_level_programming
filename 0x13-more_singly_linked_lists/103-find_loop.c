#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - func that finds loop in a linked list
 *
 * @head: 1st node in a linked list
 * Return: node address at the start of loop
 * otherwise NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_nod = head;
	listint_t *fast_nod = head;

	if (!head)
	return (NULL);

	while (slow_nod && fast_nod && fast_nod->next)
	{
		fast_nod = fast_nod->next->next;
		slow_nod = slow_nod->next;
		if (fast_nod == slow_nod)
		{
			slow_nod = head;
			while (slow_nod != fast_nod)
			{
				slow_nod = slow_nod->next;
				fast_nod = fast_nod->next;
			}
			return (fast_nod);
		}

	}

	return (NULL);
}
