#include "main.h"

/**
 * _puts - puts a string
 *
 *
 * @str: string to print
 */

	void _puts(char *str)
	{
		while (*str != '\0')
		{
			_putchar(*str++);
		}

			_putchar('\n');
	}
