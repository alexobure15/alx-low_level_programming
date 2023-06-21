#include <stdio.h>
#include "main.h"
/**
 * main - prints all natural that are
 * multiples of 3 or 5
 *
 * Return: Always 0
 */
	int main(void)
	{
		int num, sum;

		sum = 0;

		for (num = 0; num < 1024; num++)
		{
			if (num % 3 == 0 || num % 5 == 0)
			{
				sum += num;
			}
		}
			printf("%d\n", sum);
			return (0);
	}
