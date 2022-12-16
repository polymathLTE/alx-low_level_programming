#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @strn: string to be capitalized
 *
 * Description: capitalizes any word thats lone standing
 *
 * Return: (strn) return capitalized string
 */

char *cap_string(char *strn)
{
	/*declare variables*/
	size_t i;

	/*loop through the given string @strn*/
	for (i = 0; i < strlen(strn); i++)
	{
		if (isalpha(strn[i]) && islower(strn[i]) && is_word_sep(strn[i - 1]))
		{
			strn[i] = strn[i] - 32;
		}
		else
			continue;
	}
	/*return*/
	return (strn);
}


/**
 * is_word_sep - checks if char is a word separator
 * @c: char to be checked
 *
 * Description: checks the given char for being a word separator
 *
 * Return: (1) true, (0) false
 */

int is_word_sep(char c)
{
	/*declare variables*/
	size_t i;

	char separator_arr[] = " \t\n,;.!?\"(){}";

	/*loops through separator array and compares @c*/
	for (i = 0; i < strlen(separator_arr); i++)
	{
		if (c == separator_arr[i])
			return (1);

		else
			continue;
	}

	/*return*/
	return (0);
}
