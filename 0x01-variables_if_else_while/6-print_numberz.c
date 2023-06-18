#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10 ; a++)
		putchar((a % 10) + '0');

	putchar('\n');

	return (0);
}
