#include "main.h"

/**
 * _islower - determines a lowercase character
 *
 * @c: character to evaluate
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

	int _islower(int c)
	{
		return (c >= 'a' && c <= 'z');
	}
