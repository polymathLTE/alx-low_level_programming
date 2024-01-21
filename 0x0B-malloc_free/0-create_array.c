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
	char *ar;

	if (size == 0)
		return (NULL);

	/*creates an array of specified size*/
	ar = malloc(size);

	if (ar != NULL)
	{
		ar[0] = c;
		return (ar);
	}

	return (NULL);
}
