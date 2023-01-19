#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: given size of the array
 * @c: given char initializer
 *
 * Return: (*ch_arr) success (NULL) failure
 */

char *create_array(unsigned int size, char c)
{
	/*declare variables*/
	int i;
	char *ch_arr;

	if (size == 0)
		return (NULL);

	ch_arr = malloc(size);

	if (ch_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch_arr[i] = c;

	return (ch_arr);
}
