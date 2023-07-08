#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: integer to determine
 *
 * Return: integer or integer times negative
 */

	int _abs(int n)
	{
		if (n >= 0)
		{
			return (n);
		}
		else
		{
			return (-n);
		}
	}
