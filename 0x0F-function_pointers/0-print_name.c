#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 *
 * @name: the name to print
 *
 * @f: the function
 *
 * Return: void
 */
	void print_name(char *name, void (*f)(char *))
	{
		if (name != NULL && f != NULL)

			f(name);
	}
