#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function name
 * @n: integer value to be used
 *
 * Description: draws a diagonal line on the terminal
 */

void print_diagonal(int n)
{
	int line_no, diag_pos;

	if (n > 0)
		for (line_no = 0; line_no < n; line_no++)
		{
			for (diag_pos = 0; diag_pos < line_no; diag_pos++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
