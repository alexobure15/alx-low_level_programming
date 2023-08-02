#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);
/**
 * looped_listint_len - Function that determines number
 * of nodes in a looped linked list
 *
 * @head: 1st node in a linked list
 *
 * Return: number of nodes printed
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nnodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nnodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nnodes++;
				slow = slow->next;
			}

			return (nnodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - func that prints a linked list
 *
 * @head: 1st node in a linked list
 * Return: number of nodes printed in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes, idx = 0;

	nnodes = looped_listint_len(head);

	if (nnodes == 0)
	{
		for (; head != NULL; nnodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nnodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nnodes);
}
