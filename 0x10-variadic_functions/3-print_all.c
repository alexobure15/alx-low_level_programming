#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 *
 * @format: types of args passed to the func
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s1, *s2 = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s2, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s2, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s2, va_arg(list, double));
					break;
				case 's':
					s1 = va_arg(list, char *);
					if (!s1)
						s1 = "(nil)";
					printf("%s%s", s2, s1);
					break;
				default:
					i++;
					continue;
			}
			s2 = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
