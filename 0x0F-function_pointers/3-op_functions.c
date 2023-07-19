#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_div(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);

/**
 * op_sub - difference of two numbers
 *
 * @a: 1st number
 *
 * @b: 2nd number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_add - sum of two numbers
 *
 * @a: 1st number
 *
 * @b: 2nd number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - product of two numbers
 *
 * @a: 1st number
 *
 * @b: 2nd number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 *
 * @a: 1st number
 *
 * @b: 2nd number
 *
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers
 *
 * @a: 1st number
 *
 * @b: 2nd number
 *
 * Return: remainder of the division (integer)
 */

int op_mod(int a, int b)
{
	return (a % b);
}

