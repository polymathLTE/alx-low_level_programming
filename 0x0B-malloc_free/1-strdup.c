#include "main.h"
#include <string.h>

/**
 * _strdup - duplicates string in new memspace
 * @str: string pointer to be allocated
 *
 * Description: function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * Return: pointer to duplcate string (success)
 */

char *_strdup(char *str)
{
	/*init. variables*/
	char *dup_str;
	int i;

	if (str == NULL)
		return (NULL);

	/*create new memspace*/
	dup_str = malloc(sizeof(char) * strlen(str));

	/*check for successful alloc*/
	if (dup_str == NULL)
		return (NULL);

	/*duplicates string to new memspace*/
	for (i = 0; i < (int)strlen(str); i++)
		dup_str[i] = str[i];

	return (dup_str);
}
