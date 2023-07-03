#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2
 *
 * @s: source string
 *
 * @accept: searching string
 * Return: new string
 */
	unsigned int _strspn(char *s, char *accept)
	{
		unsigned int i, j, bool;

		for (i = 0; *(s + i) != '\0'; i++)
		{
			bool = 1;
			for (j = 0; *(accept + j) != '\0'; j++)
			{
				if (*(s + i) == *(accept + j))
				{
					bool = 0;
					break;
				}
			}
			if (bool == 1)
				break;
		}
		return (i);
	}
