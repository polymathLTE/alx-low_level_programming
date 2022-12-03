#include "main.h"

/**
 * swap_int - function name
 * @a: integer pointer 1
 * @b: integer pointer 2
 *
 * Description: swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int c, d;

	/*store given values temp.*/
	c = *a;
	d = *b;

	/*swap the stored values*/
	*a = d;
	*b = c;
}
