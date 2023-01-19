#include "main.h"
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: given string to be joined - 1
 * @s2: given string to be joined - 2
 *
 * Description: this function concatenates two strings
 * and returns a pointer to the resulting string
 * Return: (new_str) success (NULL) failure/error
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;

	new_str = malloc((sizeof(char) * (strlen(s1) + strlen(s2) + 1)));

	if (new_str == NULL)
		return (NULL);

	if (s1 == NULL)
		strcpy(s1, "");
	if (s2 == NULL)
		strcpy(s2, "");

	strcat(new_str, s1);
	strcat(new_str, s2);

	return (new_str);

}
