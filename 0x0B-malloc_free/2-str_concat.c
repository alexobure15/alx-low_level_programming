#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concats strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: concated string
 */

	char *str_concat(char *s1, char *s2)
	{
		int i, t;
		char *conc;

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";

		i = t = 0;
		while (s1[i] != '\0')
			i++;

		while (s2[t] != '\0')
			t++;

		conc = malloc(sizeof(char) * (i + t + 1));

		if (conc == NULL)
			return (NULL);

		i = t = 0;
		while (s1[i] != '\0')
		{
			conc[i] = s1[i];
			i++;
		}

		while (s2[t] != '\0')
		{
			conc[i] = s2[t];
			i++, t++;

		}
		conc[i] = '\0';
		return (conc);
	}
