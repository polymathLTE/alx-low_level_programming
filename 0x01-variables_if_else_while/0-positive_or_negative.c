#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description - This program shows if a random number is -ve or +ve
 *
 * Return: (0) success
 */


int main(void)
{
	int n;

	char msg1[] = "is positive\n";
	char msg2[] = "is zero\n";
	char msg3[] = "is negative\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d %s", n, msg1);

	if (n == 0)
	printf("%d %s", n, msg2);

	if (n < 0)
	printf("%d %s", n, msg3);

	return (0);
}
