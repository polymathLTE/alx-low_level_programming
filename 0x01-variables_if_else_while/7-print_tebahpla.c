/*Below are the included header files*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program displays the english alphabet
 * in lower case.
 *
 * Return: (0) success
 */

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);

putchar('\n');
return (0);
}
