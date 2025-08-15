#include "main.h"
#include <string.h>

/**
 * main - main program
 *
 * Description: Write a program that prints _putchar,
 * followed by a new line.
 *
 * Return: (0) - success
 */

int main(void)
{
	char *word = "_putchar";
	int i = 0;

	for (i = 0; i < (int)strlen(word); i++)
		_putchar(word[i]);

	_putchar('\n');

	return (0);
}
