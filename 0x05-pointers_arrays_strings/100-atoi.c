#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * _atoi - function name
 * @s: string pointer
 *
 * Description: converts a string into an integer
 *
 * Return: (val) computed value, (0) if contains no number
 */

int _atoi(char *s)
{
	/*declare all variables*/
	int len, i, itr, sign, val_tmp;
	int st_pos, end_pos, cur_pos, j, num_ecn, val;

	/*variable initialization*/
	num_ecn = 0;
	itr = 0;
	len = strlen(s);

	/*loops through the length of given string*/
	for (i = 0; i < len; i++)
	{

		/*checks for starting position of integer if found*/
		if (isdigit(s[i]) && !num_ecn)
		{
			num_ecn = 1;
			st_pos = i;
			printf("starting pos: %d\n", st_pos);

			/*checks for sign (+/-) of integer*/
			if (s[i-1] == '+' || s[i-1] == ' ')
			{
				sign = 1;
			}

			if (s[i-1] == '-')
			{
				sign = -1;
			}
			continue;
		}
		if (isdigit(s[i]) && !isdigit(s[i+1]))
		{
			end_pos = i;
			printf("end pos: %d, %d\n", end_pos, i);
			break;
		}
		if (len == 1)
			end_pos = 0;
/*
		else
		{
			val = 0;
			printf("current position: %c, num: %d\n", s[i], i);
			break;
		}
*/
	}

	/*load integer range into array*/
	if (st_pos >= 0 && end_pos >= 0)
	{
		j = 1;
		for (cur_pos = st_pos; cur_pos <= end_pos; cur_pos++, itr++)
		{

			val_tmp = s[cur_pos];
			val_tmp = val_tmp - 48;
			val = val + (val_tmp * j);
			j = j * 10;
			printf("val incr: %d", val);
		}

		/*convert int array into integer*/
/*		for (num = 0; num < size; num++)
		{

			val = val + (val_tmp[num] * j);
			j = j * 10;
		}
*/
		/*sets sign(+/-) of integer*/
		printf("val: %d", val);
		val = val * sign;
	}

	/*return (val)*/
	printf("val: %d", val);
	return (val);
}
