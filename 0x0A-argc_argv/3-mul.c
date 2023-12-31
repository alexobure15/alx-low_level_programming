#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a strn to an int
 *
 * @s: strn to be converted
 *
 * Return: integer converted from the strn
 */

	int _atoi(char *s)
	{
		int i, j, n, len, k, digit;

		i = 0;
		j = 0;
		n = 0;
		k = 0;
		len = 0;
		digit = 0;

		while (s[len] != '\0')
			len++;

		while (i < len && k == 0)
		{
			if (s[i] == '-')
				++j;

			if (s[i] >= '0' && s[i] <= '9')
			{
				digit = s[i] - '0';
				if (j % 2)
					digit = -digit;
				n = n * 10 + digit;
				k = 1;

				if (s[i + 1] < '0' || s[i + 1] > '9')
					break;
				k = 0;
			}
			i++;
		}
		if (k == 0)
			return (0);
		return (n);
	}

/**
 * main - prints product of two numbers
 *
 * @argc: argument c
 *
 * @argv: array of arguments
 *
 * Return: always 0 (Success), 1 Error
 */

	int main(int argc, char *argv[])
	{
		int result, num1, num2;

		if (argc < 3 || argc > 3)
		{
			printf("Error\n");

			return (1);
		}
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		result = num1 * num2;

		printf("%d\n", result);

		return (0);
	}
