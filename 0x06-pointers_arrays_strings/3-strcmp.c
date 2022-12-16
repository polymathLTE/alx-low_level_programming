#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Description: replica of strcmp
 *
 * Return: (val) return -ve(<0), 0(=0), +ve(>0)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
