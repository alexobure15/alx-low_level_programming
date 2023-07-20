#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_c - prints character
 *
 * @a: list of types of arguments passed
 *
 * Return: Always 0 (Success)
 */

int print_c(va_list a)
{
	printf("%c", va_arg(a, int));

	return (0);
}

/**
 * print_i - prints integer
 *
 * @a: list of types of arguments passed
 *
 * Return: Always 0 (Success)
 */

int print_i(va_list a)
{
	printf("%d", va_arg(a, int));

	return (0);
}

/**
 * print_f - prints float
 *
 * @a: list of types of arguments passed
 *
 * Return: Always 0 (Success)
 */

int print_f(va_list a)
{
	printf("%f", va_arg(a, double));

	return (0);
}

/**
 * print_s - prints string
 *
 * @a: list of types of arguments passed
 *
 * Return: Always 0 (Success)
 */

int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");

		return (0);
	}
	printf("%s", s);

	return (0);
}

/**
 * print_all - prints anything
 *
 * @format: types of args passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	int i, k;
	char *s1 = "";
	char *s2 = ", ";
	va_list anyArgs;

	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(anyArgs, format);
	i = 0;
	while (format != NULL && format[i])
	{
		k = 0;
		while (ops[k].f != NULL)
		{
			if (format[i] == *(ops[k].c))
			{
				printf("%s", s1);
				ops[k].f(anyArgs);
			}
			k++;
		}
		s1 = s2;
		k++;
	}
	printf("\n");
	va_end(anyArgs);
}
