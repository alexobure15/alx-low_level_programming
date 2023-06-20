#include "main.h"
/**
 * print_sign - print the signs of a number
 * @n: n is an input number is an integer
 * Return: 1 is greater than 0. Zero is zero
 *
 * -1 is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
		_putchar('\n');
}
