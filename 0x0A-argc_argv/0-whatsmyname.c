#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc: arguments count
 * @argv: arguments array
 *
 * Description: If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
