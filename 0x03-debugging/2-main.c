#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * 
 * Return: Always (success)
 */

	int main(void)
	{
		int largest;
		int a, b, c;
	
		a = 972;
		b = -98;
		c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

}

