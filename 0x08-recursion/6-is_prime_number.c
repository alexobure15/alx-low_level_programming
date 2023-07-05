#include "main.h"

	int actual_prime(int i, int n);
/**
 * actual_prime -calculates if a number is prime or not
 *
 * @i: iterator
 *
 * @n: number to test
 *
 * Return: 1 if n is a prime number, 0 if not
 */

	int actual_prime(int i, int n)
	{
		if (n % i == 0 && n != i)
			return (0);
		if (n % i != 0 && i < n)
			return (actual_prime(i + 1, n));

		return (1);
	}

/**
 * is_prime_number - determines if an integer is prime or not
 *
 * @n: integer to compare
 *
 * Return: 1 if n is a prime number, 0 if not
 */
	int is_prime_number(int n)
	{
		int i = 2;

		if (n < 2)
			return (0);

		return (actual_prime(i, n));
	}
