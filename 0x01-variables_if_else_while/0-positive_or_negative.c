#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: This program check where a randomly generated number
 * is on the number line; and displays the result.
 *
 * Return: (0) success
 */

int main(void)
{
	int n;
	char disp_msg1[20], disp_msg2[20], disp_msg3[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	strcpy(disp_msg1, "is positive\n");
	strcpy(disp_msg2, "is zero\n");
	strcpy(disp_msg3, "is negative\n");

	if (n > 0)
	printf("%d %s", n, disp_msg1);
	if (n == 0)
	printf("%d %s", n, disp_msg2);
	if (n < 0)
	printf("%d %s", n, disp_msg3);

	return (0);
}
