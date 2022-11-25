#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int i, largest, size;
	int lrg[3];

	lrg[0] = a;
	lrg[1] = b;
	lrg[2] = c;

	largest = 0;
	size = sizeof(lrg) / sizeof(*lrg);

	for (i = 0; i < size; i++)
	{
		if (lrg[i] > largest)
		{
			largest = lrg[i];
		}
	}
	return (largest);
}
