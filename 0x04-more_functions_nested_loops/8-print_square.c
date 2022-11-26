#include <stdio.h>
#include "main.h"

/**
 * print_square - function name
 * @size: integer val to be used
 *
 * Description: displays a square, followed by a new line
 */

void print_square(int size)
{
	int sqr_len, sqr_brth;

	if (size > 0)
	{
		for (sqr_len = 0; sqr_len < size; sqr_len++)
		{
			for (sqr_brth = 0; sqr_brth < size; sqr_brth++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
