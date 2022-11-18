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
int num, num1, num2;

for (num = 0; num <= 100; num++)
{
num1 = num / 10;
num2 = num % 10;
if (num1 < num2)
{
putchar(num1 + '0');
putchar(num2 + '0');

if (num < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
