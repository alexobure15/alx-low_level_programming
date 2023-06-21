#include "main.h"
/**
 * print_times_table - prints times table
 *
 *@n:integer for which the times table
 *will be printed
 * Return: void
 *
 */

void print_times_table(int n)
{
	int num, mult,  prod;

	if (n >= 0 && n < 15)
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
			prod = num * mult;
			if (mult == 0)
				_putchar('0');

			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod % 10 + '0');
			}
			else if (prod >= 10 && prod < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((prod / 10) % 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (prod > 99 && prod < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 100 + '0');
				_putchar((prod / 10) % 10 + '0');
				_putchar(prod % 10 + '0');
			}
			}
		_putchar('\n');
		}
	}
}
