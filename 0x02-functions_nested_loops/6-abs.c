#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the given integer
 *
 * Description: this is a simple implementation of the
 * abs function in the standard library.
 *
 * Return: absolute value of given integer
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
