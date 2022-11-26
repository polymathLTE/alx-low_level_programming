#include <stdio.h>
#include "main.h"

/**
 * print_line - function name
 * @n: integer to be used
 *
 * Description: draws a straight line in the terminal
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
