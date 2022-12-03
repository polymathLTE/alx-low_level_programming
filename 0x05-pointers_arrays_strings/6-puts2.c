#include "main.h"
#include <string.h>

/**
 * puts2 - function name
 * @s: string pointer
 *
 * Description: displays a string, in reverse, followed by a new line
 */

void puts2(char *s)
{
	int size, index;
	char *start_ptr, *end_ptr, temp;

	size = strlen(s);
	end_ptr = s + size - 1;
	start_ptr = s;

	/* Swap the char from start and end*/
	/* index using start_ptr and end_ptr*/
	for (index = 0; index < size / 2; index++) {

		/* swap values of the both pointers*/
		temp = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = temp;

		/* After swapping the elments ,increase the*/
		/*start pointer by 1 postion to point to the next*/
		/*element and decrease the end pointer by 1 for next swapping*/

		start_ptr++;
		end_ptr--;

		_putchar(s);
	}
}
