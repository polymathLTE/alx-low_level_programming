#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: no of bytes of @src to be copied into @dest
 *
 * Description: replica of strncpy function
 *
 * Return: (dest) pointer to updated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*declare variables*/
	int i;

	/*initialize variables*/
	i = 0;

	/*loop through @dest & @src adding contents of src to dest*/
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	/*end the dest*/
	dest[i] = '\0';

	/*return*/
	return (dest);
}
