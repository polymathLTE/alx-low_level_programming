#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - displays all possible different combinations of three digits
 *
 * Return: (0) success
 */

int main(void)
{
	int num, num1, num2;

	for (num = 0; num <= 7; num++)
	{
		for (num1 = num + 1; num1 <= 8; num1++)
		{
			for (num2 = num1 + 1; num2 <= 9; num2++)
			{
				putchar(num + '0');
				putchar(num1 + '0');
				putchar(num2 + '0');

				if (!(num == 7 && num1 == 8 && num2 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');
	return (0);
}

