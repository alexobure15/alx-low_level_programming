#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - determines if a string contains a non-digit char
 *
 * @s: string to be evaluated
 *
 * Return: return 0 if a non-digit is found, otherwise 1
 */

	int is_digit(char *s)
	{
		int i = 0;

		while (s[i])
		{
			if (s[i] < '0' || s[i] > '9')
				return (0);
			i++;
		}

		return (1);
	}

/**
 * _strlen - returns string length
 *
 * @s: string to be evaluated
 *
 * Return: length of the string
 */

	int _strlen(char *s)
	{
		int i = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		return (i);
	}

/**
 * errors - handles main errors
 *
 */
	void errors(void)
	{
		printf("Error\n");
		exit(98);
	}
/**
 * main - multiplies 2 +ve numbers
 *
 * @argc: argument c
 *
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
	int main(int argc, char *argv[])
	{
		char *s1, *s2;
		int leng1, leng2, leng, i, carry, num1, num2, *result, a = 0;

		s1 = argv[1], s2 = argv[2];
		if (argc != 3 || !is_digit(s1) || !is_digit(s2))
			errors();

		leng1 = _strlen(s1);
		leng2 = _strlen(s2);
		leng = leng1 + leng2 + 1;
		result = malloc(sizeof(int) * leng);

		if (!result)
			return (1);

		for (i = 0; i <= leng1 + leng2; i++)
			result[i] = 0;

		for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
		{
			num1 = s1[leng1] - '0';
			carry = 0;

			for (leng2 = _strlen(s2) - 1; leng2 >= 0; leng2--)
			{
				num2 = s2[leng2] - '0';
				carry += result[leng1 + leng2 + 1] + (num1 * num2);
				result[leng1 + leng2 + 1] = carry % 10;
				carry /= 10;
			}
			if (carry > 0)
				result[leng1 + leng2 + 1] += carry;
		}

		for (i = 0; i < leng - 1; i++)
		{
			if (result[i])
				a = 1;
			if (a)
				_putchar(result[i] + '0');
		}

		if (!a)
			_putchar('0');

		_putchar('\n');

		free(result);

		return (0);


	}

