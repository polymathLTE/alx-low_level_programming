#include "main.h"

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments array
 *
 * Description: program that prints all arguments it receives
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{
	/*declare variables*/
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
