#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/* betty style doc for function main goes there */
/**
 * positive_or_negative(i) - function
 * @n: integer to be checked
 *
 * Description: checks if a number is greater, less than or equal to 0
 */

void positive_or_negative(int n)
{
	char disp_msg1[20], disp_msg2[20], disp_msg3[20];
	strcpy(disp_msg1, "is positive\n");
	strcpy(disp_msg2, "is zero\n");
	strcpy(disp_msg3, "is negative\n");

	if (n > 0)
	printf("%d %s", n, disp_msg1);
	if (n == 0)
	printf("%d %s", n, disp_msg2);
	if (n < 0)
	printf("%d %s", n, disp_msg3);
}
