#include "main.h"

/**
 * print_array - function name
 * @a: integer pointer
 * @n: integer
 *
 * Description: displays @n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
