#include "main.h"
#include <string.h>

/**
 * _strcat - function name
 * @dest: char[] pointer
 * @src: char[] pointer
 *
 * Description: appends the @src string to the @dest string,
 * overwriting the terminating null byte and the end of dest, and then
 * adds a terminating null byte.
 *
 * Return: (*dest) processed value
 */

char *_strcat(char *dest, char *src)
{
	/*declare variables*/
	int i, j;

	/*initialize the variables*/
	i = 0;
	j = 0;

	/*loop through @dest*/
	while (dest[i] != '\0')
		i++;

	/*loop through @src and add content to the end of @dest*/
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
