#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This task uses the fprintf method to
 * display a message and special symbols
 *
 * Return: (1) undefined
 */

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stdout, "%s", msg);
return (1);
}
