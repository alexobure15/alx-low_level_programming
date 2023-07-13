#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the char c to stdout
 *
 * @c: the charto print
 *
 * Return: 1 on success and -1  On error,
 * and errno is set
 */

	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
