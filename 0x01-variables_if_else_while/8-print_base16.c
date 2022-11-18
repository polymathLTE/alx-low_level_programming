#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - displays the numbers in hexadecimal
 *
 * Return: (0) success
 */

int main(void)
{
char hex_num, hex_alpha;
for (hex_num = '0'; hex_num <= '9'; hex_num++)
putchar(hex_num);

for (hex_alpha = 'a'; hex_alpha <= 'f'; hex_alpha++)
putchar(hex_alpha);

putchar('\n');
return (0);
}
