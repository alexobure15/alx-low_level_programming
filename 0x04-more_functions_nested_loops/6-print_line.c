#include "main.h"

/**
 * print_line - prints a line of n long
 * @n: length of line
 *
 * Return: Void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
