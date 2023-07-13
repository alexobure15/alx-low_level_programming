#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a mem block using malloc and free
 *
 * @ptr: ptr to the mem previsouly allocated
 *
 * @old_size: size of the allocated mem
 *
 * @new_size: new size of the allocated  mem block
 *
 * Return: ptr to the newly allocated mem block
 */

	void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
	{
		char *t1;
		char *old_t;
		unsigned int j;

		if (new_size == old_size)
			return (t);

		if (new_size == 0 && t)
		{
			free(t);
			return (NULL);
		}

		if (!t)
			return (malloc(new_size));

		t1 = malloc(new_size);
		if (!t1)
			return (NULL);

		old_t = t;

		if (new_size < old_size)
		{
			for (j = 0; j < new_size; j++)
				t1[j] = old_t[j];
		}

		if (new_size > old_size)
		{
			for (j = 0; j < old_size; j++)
				t1[j] = old_t[j];

		}

		free(t);
		return (t1);
	}
