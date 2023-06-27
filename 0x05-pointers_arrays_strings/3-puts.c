#include "main.h"

/**
 * _puts - prints string
 *
 * @str: an input string
 * Return: void
 */

	void _puts(char *str)
	{
		while (*str)
		_putchar(*str++);

		_putchar('\n');
	}
