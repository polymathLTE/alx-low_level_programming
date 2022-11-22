#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a customized function
 *
 * Description: displays all letters of the english alphabet in
 * lower case
 *
 * Return: (0) success
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}

_putchar ('\n');
}
