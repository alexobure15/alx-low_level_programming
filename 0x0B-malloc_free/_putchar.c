#include <unistd.h>
#include "main.h"

/**
 * _putchar -prints the char c to stdout
 *
 * @c: char to print
 *
 * Return: return 1 on success and on error, -1 is returned,
 * and errno is appropriately set
 */

	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
