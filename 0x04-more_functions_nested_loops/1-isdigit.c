#include <stdio.h>

/**
 * _isdigit - function name
 * @c: integer to be checked
 *
 * Description: this functin checks for a digit (0 through 9)
 *
 * Return: (1) if c is a digit, (0) otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
