#include "main.h"

/**
 * _islower - check the name
 * @c: the integer to be checked
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
