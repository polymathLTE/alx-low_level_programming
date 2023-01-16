#include "main.h"
#include <string.h>
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
	int cent, val;
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
	val = get_change(cent, cent_arr);
	printf("%d\n", val);
	return (0);

}

/**
 * get_change - counts num of coins
 * @cent: change to compute (int)
 * @cent_ary: array of coin types
 *
 * Description: counts the number of coins that can be found in @cent
 *
 * Return: (val) number of coins
 */

int get_change(int cent, int cent_ary[])
{
	int val = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		if (cent == 0)
			return (val);
		if (cent >= cent_ary[i])
		{
			val += cent / cent_ary[i];
			cent = cent % cent_ary[i];
		}
	}
	return (val);
}
