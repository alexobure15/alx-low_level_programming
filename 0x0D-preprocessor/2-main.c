#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of file it
 * was compiled from
 *
 * Return: always 0 (Success)
 */

	int main(void)
	{
		printf("%s\n", __FILE__);

		return (0);
	}
