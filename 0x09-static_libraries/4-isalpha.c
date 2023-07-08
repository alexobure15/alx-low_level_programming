#include "main.h"

/**
 * _isalpha - determines if a characteris alphabetic
 *
 * @c: character to be evaluated
 *
 * Return: returns 1 if c is a letter, otherwise 0
 */

	int _isalpha(int c)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		return (0);
	}
