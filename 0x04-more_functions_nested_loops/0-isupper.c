#include "main.h"
#include "ctype.h"

/**
 * _isupper - checks for uppercase character
 * @n: character to be checked
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
		return (1);
	else
		return (0);
}
