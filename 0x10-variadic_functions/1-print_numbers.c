#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - func that prints numbers
 *
 * @separator: string to be printed btn numbers
 *
 * @n: number of integers passed to the func
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);


	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(nums, int));


		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

