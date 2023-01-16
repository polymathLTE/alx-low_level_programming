#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 * @argc: arguments count
 * @argv: arguments array
 *
 * Description: program should print a number, followed by a new line
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
