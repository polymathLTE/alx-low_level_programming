#include <stdio.h>

/**
 * main - entry point
 *
 * Description - displays all possible combination of single digit numbers
 *
 * Return: (0) success
 */

int main(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
