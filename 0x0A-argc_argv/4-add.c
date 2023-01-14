#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 *
 * Description: program that adds positive numbers
 *
 * Return: (sum) success, (1) error
 */

int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < 1; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (sum);
}
