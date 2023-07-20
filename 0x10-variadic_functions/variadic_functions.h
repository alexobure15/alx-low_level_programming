#ifndef _VARIADIC_H_
#define _VARIADIC_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
int print_s(va_list a);
int print_f(va_list a);
int print_i(va_list a);
int print_c(va_list a);

/**
 * struct op - struct for 3
 *
 * @c: char to check
 *
 * @f: func to point
 */

typedef struct op
{
	char *c;
	int (*f)(va_list a);

} printer;

#endif
