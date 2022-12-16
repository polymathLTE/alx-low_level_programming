#include "main.h"

/**
 * _strncat - functions to concatenate two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: no of bytes of @src to be appended to @dest
 *
 * Description: this function will read at most @n bytes from src and
 * append to @dest
 *
 * Return: (dest) pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	/*declare variables*/
	int i, j;

	/*initialize variables*/
	i = 0;
	j = 0;
	/*loop through @dest*/
	while (dest[i] != '\0')
		i++;

	/*loop through @src for @n times*/
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/*end the @dest string*/

	return (dest);
}
