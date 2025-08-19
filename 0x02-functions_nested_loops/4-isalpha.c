#include "main.h"

/**
 * _isalpha - check the name
 * @c: the integer  to be checked
 *
 * Return: 1 is c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
