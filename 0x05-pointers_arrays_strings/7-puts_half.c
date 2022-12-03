#include "main.h"
#include <string.h>

/**
 * puts_half - function name
 * @s: string pointer
 *
 * Description: displays the second half of a string
 */

void puts_half(char *str)
{
	int i, len, odd_no, even_no, no;

	len = strlen(str);
	odd_no = (len - 1) / 2;
	even_no = len / 2;

	/*set mid-point of the string*/
	if (len % 2 == 0)
		no = even_no;
	else
		no = odd_no;

	/*loop through the string, and display from the midpoint*/
	for (i = 0; i < len; i++)
	{
		if (i >= no)
			printf("%c", str[i]);
	}
	printf("\n");
}
