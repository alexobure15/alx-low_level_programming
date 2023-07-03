#include "main.h"
/**
 * _strstr -  a function that locates a substring
 *
 * @haystack: an input string to search through
 *
 * @needle: string to match
 *
 * Return:  a pointer to initial segment of haystack
 *
 */
	char *_strstr(char *haystack, char *needle)
	{
		char *bhaystack;
		char *pneedle;

		while (*haystack != '\0')
		{
			bhaystack = haystack;
			pneedle = needle;

			while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
			{
				haystack++;
				pneedle++;
			}
			if (!*pneedle)
				return (bhaystack);
			haystack = bhaystack + 1;
		}
		return (0);
	}
