#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function name
 *
 * Description: displays the numbers 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
