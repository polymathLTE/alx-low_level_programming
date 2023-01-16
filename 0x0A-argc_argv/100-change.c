#include "main.h"

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments array
 *
 * Description: program that prints the minimum number of coins to make
 * change for an amount of money
 *
 * Return: (val) - num of coins (1) - error/fail
 */

int main(int argc, char **argv)
{
	/*declare variables*/
	int cent, val, i;
	int cent_arr[] = {25, 10, 5, 2, 1};

	/*(void) unused variables*/
	(void)argc;

	/*check for invalid entries*/
	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) == 0)
		printf("0\n");

	/*count change*/
	cent = atoi(argv[1]);
	val = 0;
	for (i = 0; i < 5; i++)
	{
		if (cent == 0)
			break;
		if (cent >= cent_arr[i])
		{
			val += cent / cent_arr[i];
			cent = cent % cent_arr[i];
		}
	}
	printf("%d\n", val);
	return (0);
}
