#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: no. of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting strn
 */

	char *string_nconcat(char *s1, char *s2, unsigned int n)
	{
		unsigned int i, leng1, leng2;
		char *s;

		if (s2 == NULL)
			s2 = "";

		if (s1 == NULL)
			s1 = "";

		leng1 = 0;
		leng2 = 0;
		while (s2[leng2] != '\0')
			leng2++;

		while (s1[leng1] != '\0')
			leng1++;

		if (n >= leng2)
			n = leng2;

		s = malloc(sizeof(char) * n + leng1 + 1);
		if (s == NULL)
			return (NULL);

		for (i = 0; i < leng1; i++)
			s[i] = s1[i];

		for (i = 0; i < n; i++)
			s[i + leng1] = s2[i];

		s[i + leng1] = '\0';

		return (s);
	}
