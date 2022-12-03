#include "main.h"
#include <string.h>

/**
 * _puts - function name
 * @str: string pointer
 *
 * Description: displays a string, followed by a new line to stdout
 */

void _puts(char *str)
{
	int i, size;

	size = strlen(str);
	for (i = 0; i < size; i++)
		printf("%c", str[i]);
	printf("\n");
}
