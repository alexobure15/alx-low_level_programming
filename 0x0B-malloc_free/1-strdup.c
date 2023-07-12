#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates string
 *
 * @str: string to copy
 *
 * Return: always 0 (Success)
 */

	char *_strdup(char *str)
	{
		int i, r = 0;
		char *t;

		if (str == NULL)
			return (NULL);

		i = 0;

		while (str[i] != '\0')
			i++;

		t = malloc(sizeof(char) * (i + 1));

		if (t == NULL)
			return (NULL);

		for (r = 0; str[r]; r++)
			t[r] = str[r];

		return (t);
	}
