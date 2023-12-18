#include <stdio.h>

/**
 * main - entry point
 *
 * Description - This program displays the size of various C types
 * depending on the computer it is run
 * 
 * Return: (0)
 */

int main(void)
{
	char msg1[] = "Size of a";
	char msg2[] = "Size of an";
	printf("%s float is %ld bytes and %s integer is %ld", msg1, sizeof(double), msg2, sizeof(char));
}
