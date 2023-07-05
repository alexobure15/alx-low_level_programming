#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate the square root
 *
 * Return: resulting square root
 */

	int _sqrt_recursion(int n)
	{
		if (n < 0)
			return (-1);
		return (actual_sqrt_recursion(n, 0));
	}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 *
 * @square: square integer
 *
 * @i: iterator
 *
 * Return: the resulting square root
 */

	int actual_sqrt_recursion(int square, int i)
	{
		if (i * i > square)
			return (-1);

		if (i * i == square)
			return (i);

		return (actual_sqrt_recursion(square, i + 1));
	}
