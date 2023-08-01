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
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
