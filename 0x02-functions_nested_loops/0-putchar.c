#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description - displays "_putchar"
 *
 * Return: (0)
 */

int main(void)
{
int i, len;
char disp_msg[10];

strcpy(disp_msg, "_putchar");
len = strlen(disp_msg);

for (i = 0; i < len; i++)
{
_putchar(disp_msg[i]);
}
_putchar('\n');
return (0);
}
