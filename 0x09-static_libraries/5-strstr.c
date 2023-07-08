#include "main.h"

/**
 * _strstr - checks for the substring
 *
 * @haystack: string to find
 *
 * @needle: substring to find
 *
 * Return: always 0 (Success)
 */

	char *_strstr(char *haystack, char *needle)
	{
		for (; *haystack != '\0'; haystack++)
		{
			char *i = haystack;
			char *p = needle;

			while (*i == *p && *p != '\0')
			{
				i++;
				p++;
			}

			if (*p == '\0')

				return (haystack);
		}

		return (0);
	}
