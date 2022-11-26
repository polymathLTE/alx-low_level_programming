#include <stdio.h>

/**
 * main - starting point
 *
 * Description: displays numbers 1 through to 100, but for
 * multiples of (3) prints 'Fizz', (5) prints 'Buzz', (3 & 5) prints 'FizzBuzz'
 *
 * Return: (0) success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
