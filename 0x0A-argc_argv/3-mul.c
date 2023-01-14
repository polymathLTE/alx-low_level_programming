#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 *
 * Description: program that multiplies two numbers
 *
 * Return: (val) quotient of args, (1) error
 */

int main(int argc, char **argv)
{
	/*declare variables*/
	int val, a, b;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	val = a * b;
	printf("%d\n", val);
	return (val);
}
