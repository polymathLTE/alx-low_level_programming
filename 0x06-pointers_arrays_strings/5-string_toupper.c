#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @strn: string to be converted
 *
 * Description: converts given string to uppercase
 *
 * Return: (strn) coverted string
 */

char *string_toupper(char *strn)
{
	/*declare variables*/
	size_t i;

	/*initialize variables*/
	i = 0;

	/*loop through @strn and convert to uppercase*/
	for (; i < strlen(strn); i++)
	{
		if (strn[i] >= 'a' && strn[i] <= 'z')
		{
			strn[i] = strn[i] - 32;
		}
	}

	/*return*/
	return (strn);
}
