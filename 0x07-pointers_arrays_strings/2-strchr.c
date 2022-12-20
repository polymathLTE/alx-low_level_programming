#include "main.h"
#include <string.h>

/**
 * _strchr - function that returns pointer to a char
 * @s: given string to be searched
 * @c: given char to be searched for in @c
 *
 * Decsription: returns a pointer to a given char @c if found in given string @s
 *
 * Return: (*val) first occur. of char c in the string @s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	/*declare variables*/
	int i, s_len;
	char *val;

	/*initialize variables*/
	s_len = strlen(s);

	/*loop through the given string for the first occurence of @c*/
	for (i = 0; i < s_len; i++)
	{
		if (s[i] == c)
		{
			val = &s[i];
			break;
		}
		else if (i == s_len - 1)
		{
			val = NULL;
			break;
		}
		else
			continue;
	}
	return (val);
}
