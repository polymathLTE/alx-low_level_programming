#include "main.h"

/**
 * reverse_array - reverses the content of an integer array
 * @a: integer array pointer
 * @n: no of elements of the array @a
 *
 * Description: reverses the content of @a array
 */

void reverse_array(int *a, int n)
{
	/*declare variables*/
	int i, n_cp, temp, len;

	/*initialize variables*/
	i = 0;
	n_cp = n - 1;

	/*set the loop count based on n's eveness or oddness*/
	if (n % 2 == 0)
		len = n / 2;
	else
		len = (n - 1) / 2;

	/*loop through array, switching front and back values*/
	while (i < len)
	{
		temp = a[i];
		a[i] = a[n_cp];
		a[n_cp] = temp;
		i++;
		n_cp--;
	}
}
