#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: given string to be duplicated
 *
 * Return: (strn) success (NULL) failure/error
 */

char *_strdup(char *str)
{
	char *strn;

	if (str == NULL)
		return (NULL);

	strn = malloc(sizeof(char) * strlen(str) + 1);

	if (strn == NULL)
		return (NULL);

	strcpy(strn, str);

	return (strn);
}
