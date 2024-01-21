#include "main.h"
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	/*init. variables*/
	char *concat_str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
			

	/*allocate memspace*/
	concat_str = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);

	/*check for successful allocation*/
	if (concat_str == NULL)
		return (NULL);

	/*write values to memspace*/
	for (i = 0; i < (int)strlen(s1); i++)
		concat_str[i] = s1[i];
	for (j = 0; i < (int)strlen(s2); i++)
		concat_str[i] = s2[j];
	concat_str[i] = '\0';

	return (concat_str);
}
