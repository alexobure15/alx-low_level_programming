#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - func that returns the
 * sum of all its params
 *
 * @n: number of params passed to the func
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argSum;
	unsigned int i, sum = 0;


	va_start(argSum, n);


	for (i = 0; i < n; i++)
		sum += va_arg(argSum, int);

	va_end(argSum);


	return (sum);
}

