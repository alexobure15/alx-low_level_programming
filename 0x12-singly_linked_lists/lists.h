#ifndef _LISTS_H_
#define _LISTS_H_
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * struct list_s - singly linked
 *
 * @str: string
 *
 * @len: string length
 *
 * @next: pnts to the next node
 *
 * Description: project for singly linked list node structure
 */

	typedef struct list_s
	{

		char *str;
		unsigned int len;
		struct list_s *next;
	} list_t;

	size_t list_len(const list_t *h);
	size_t print_list(const list_t *h);
	void free_list(list_t *head);
	list_t *add_node(list_t **head, const char *str);
	list_t *add_node_end(list_t **head, const char *str);

#endif

