#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function name
 *
 * Description: displays 10 times the numbers, from 0 to 14,
 * followed by a new line
 */

void more_numbers(void)
{
	int no_times, no_incr;

	for (no_times = 0; no_times < 10; no_times++)
	{
		for (no_incr = 0; no_incr <= 14; no_incr++)
		{
			if (no_incr >= 10)
				_putchar('1');
			_putchar(no_incr % 10 + '0');
		}
		_putchar('\n');
	}
}
