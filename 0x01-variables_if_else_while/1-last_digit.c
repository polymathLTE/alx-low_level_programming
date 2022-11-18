#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: This compares a generated random through given parameters
 *
 * Return: (0) success
 */

int main(void)
{
/*variable declaration below*/
int n, last_digit;
char disp_msg1[15], disp_msg2[5], disp_msg3[25],
disp_msg4[15], disp_msg5[35];

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
last_digit = n % 10;
strcpy(disp_msg1, "Last digit of");
strcpy(disp_msg2, "is");
strcpy(disp_msg3, "and is greater than 5\n");
strcpy(disp_msg4, "and is 0\n");
strcpy(disp_msg5, "and is less than 6 and not 0\n");

if (last_digit > 5)
printf("%s %d %s %d %s", disp_msg1, n, disp_msg2, last_digit, disp_msg3);
if (last_digit == 0)
printf("%s %d %s %d %s", disp_msg1, n, disp_msg2, last_digit, disp_msg4);
if (last_digit < 6 && last_digit != 0)
printf("%s %d %s %d %s", disp_msg1, n, disp_msg2, last_digit, disp_msg5);
return (0);
}
