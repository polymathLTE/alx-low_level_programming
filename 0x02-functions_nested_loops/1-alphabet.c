#include "main.h"

/**
 * print_alphabet - prints the english alphabet
 *
 * Description:  a function that prints the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
