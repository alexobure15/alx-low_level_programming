#include "main.h"
/**
 * print_numbers - prints numbers 0 - 9
 *
 * Return: Returns always 0
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
