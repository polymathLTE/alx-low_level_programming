#include <stdio.h>

/**
 * _isupper - function name
 * @c: integer to be checked
 *
 * Description: checks for uppercase character
 *
 * Return: (1) if uppercase, (0) otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
