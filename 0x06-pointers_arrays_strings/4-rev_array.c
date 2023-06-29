#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 *
 * @a: array
 *
 * @n: size of array
 *
 * Return: no return
 */
	void reverse_array(int *a, int n)
	{
		int swap, begin, end;

		begin = 0;
		end = n - 1;

		while (begin < end)
		{
			swap = *(a + begin);
			*(a + begin) = *(a + end);
			*(a + end) = swap;
			begin++;
			end--;
		}
	}
