#include "main.h"
#include <string.h>

/**
 * str_concat - concats two strings and writes to new memspace
 * @s1: string 1
 * @s2: string 2
 *
 * Description: concats two strings and writes to new memspace
 *
 * Return: new string memspace pointer
 */

char *str_concat(char *s1, char *s2)
{
	/*init. variables*/
	char *concat_str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*allocate memspace*/
	concat_str = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);

	/*check for successful allocation*/
	if (concat_str == NULL)
		return (NULL);

	/*write values to memspace*/
	for (i = 0; i < (int)strlen(s1); i++)
		concat_str[i] = s1[i];
	for (j = 0; j < (int)strlen(s2); j++)
		concat_str[i + j] = s2[j];
	concat_str[i + j] = '\0';

	return (concat_str);
}
