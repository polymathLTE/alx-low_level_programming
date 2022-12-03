#include "main.h"
#include <string.h>

/**
 * _strcpy - function name
 * @dest: string pointer
 * @src: string pointer
 *
 * Description: copies the string pointed to by src, 
 * including the terminating null byte, to the buffer pointed to by dest
 *
 * Return: (val) the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
