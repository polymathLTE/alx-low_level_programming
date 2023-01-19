#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: given size of the array
 * @char: given char initializer
 *
 * Return: (*ch_arr) success (NULL) failure
 */

char *create_array(unsigned int size, char c)
{
	char *ch_arr;

	if (size == 0)
		return (NULL);

	ch_arr = malloc(size + 1);
	ch_arr[0] = c;

	return (ch_arr);
}
