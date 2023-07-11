#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument c
 *
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

	int main(int argc, char  *argv[])
	{
		int j;

		for (j = 0; j < argc; j++)
		{
			printf("%s\n", argv[j]);
		}

		return (0);
	}
