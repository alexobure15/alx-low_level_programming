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
		int start;

		start = 1;

		if (n < 0)
			return (-1);

		else if (n == 1)
			return (1);

		else
			return (check_int(n, start));
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
		if (i * i == square)
			return (i);

		if (i > square / i)
			return (check_int(square, i - 1));

		else if (i < square / i)
			return (check_int(square, i + 1));

		else
			return (-1);
	}
