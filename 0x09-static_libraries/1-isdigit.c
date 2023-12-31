#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: integer to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

	int _isdigit(int c)
	{
		if (c >= '0' && c <= '9')
			return (1);

		return (0);
	}
