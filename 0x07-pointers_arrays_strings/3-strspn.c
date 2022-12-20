#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: given string
 * @accept: substring to be searched for in string @s
 *
 * Description: function that returns the length of a substring -
 * @accept when checked against string @s
 *
 * Return: (val) the number of bytes in initial segment of @s which -
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	/*declare variables*/
	int val, i, itr, flag;

	/*initialize variables*/
	val = 0;

	/*loop through the string @s*/
	for (itr = 0; s[itr] != '\0'; itr++)
	{
		flag = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
 			if (accept[i] == s[itr])
			{
				val++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (val);
	}
	return (0);
}
