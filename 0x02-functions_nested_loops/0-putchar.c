#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: displays a set of characters
 *
 * Return - 0
 */

int main(void)
{
  char *prn_var = "_putchar";
  for (int i = 0; i < strlen(prn_var); i++)
    {
      _putchar(prn_var[i]);
    }
  _putchar('\n');
}
