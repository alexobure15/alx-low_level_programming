#include <stdio.h>
#include "lists.h"

/**
 * bfmain - function printed before main
 *
 * Return: void
 */

	void __attribute__ ((constructor)) bfmain()
	{
		printf("You're beat! and yet, you must allow,\n");

		printf("I bore my house upon my back!\n");
	}
