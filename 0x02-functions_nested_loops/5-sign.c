#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: the given integer
 *
 * Return: 1 is greater than 0, 0 if equals 0, -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}

	else
	{
		_putchar('0');
		return(0);
	}
}
