#include "main.h"
/**
 * print_last_digit - prints last digit
 * of a mumber
 * @n: n input number as an integer
 * Return: last digit (Success)
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)

		last = last * -1;

	_putchar(last + '0');

	return (last);

}
