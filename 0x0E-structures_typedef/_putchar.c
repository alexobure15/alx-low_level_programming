#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - prints the char c to stdout
 * @c: char to print
 *
 * Return: Returns 1 on success,
 * -1 on error and errno is set appropriately
 */

	int _putchar(char c)
	{

		return (write(1, &c, 1));
	}
