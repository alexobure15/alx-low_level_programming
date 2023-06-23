#include "main.h"

/**
 * more_numbers - prints numbers  0 - 14
 *
 * Returns: Always (Success)
 */
void more_numbers(void)
{
	int i;
	char a, b;

	for (i = 0; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;

			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}

}
