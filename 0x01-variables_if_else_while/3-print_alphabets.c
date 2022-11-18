/*Below are included Header files*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription - This program displays the english alphabet
 * in both upper and lower cases (using the putchar function)
 *
 * Return: (0) success
 */

int main(void)
{
char alpha_lower,  alpha_upper;

for (alpha_lower = 'a'; alpha_lower <= 'z'; alpha_lower++)
putchar(alpha_lower);

for (alpha_upper = 'A'; alpha_upper <= 'Z'; alpha_upper++)
putchar(alpha_upper);

putchar('\n');
return (0);
}
