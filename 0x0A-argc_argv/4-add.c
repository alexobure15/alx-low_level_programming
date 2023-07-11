#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * main - prints the name of the program
 * to make change for an amount of money
 *
 * @argc: number of args
 *
 * @argv: array of args
 *
 * Return: always 0 (Success)
 */

	int main(int argc, char *argv[])
	{
		int i, k, add = 0;

		for (i = 1; i < argc; i++)
		{
			for (k = 0; argv[i][k] != '\0'; k++)
			{
				if (!isdigit(argv[i][k]))
				{
					printf("Error\n");

					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
		return (0);
	}
