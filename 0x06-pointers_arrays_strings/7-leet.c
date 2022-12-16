#include "main.h"
#include <string.h>
/**
 * leet - function to encode a string into leet
 * @str: string to be encoded
 *
 * Description: encodes a given string into leet(1337)
 *
 * Return: (str) encoded string
 */

char *leet(char *str)
{
	/*declare variables*/
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i = 0;
	int itr = 0;
	int len = strlen(str);

	/*loop through the given string*/
	for (; itr < len; itr++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[itr] == a[i] || str[itr] == a[i] - 32)
			{
				str[itr] = n[i] + '0';
			}
		}
	}
	return (str);
}
