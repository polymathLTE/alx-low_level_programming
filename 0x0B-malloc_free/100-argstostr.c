#include "main.h"
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments
 * of your program and return a pointer to the resulting string
 * @ac: arguments count
 * @av: arguments array
 *
 * Return: (buf) success (NULL) failure/error
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *buf;

	printf("buf: %d", (int)sizeof(buf));

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		buf = (char *)malloc(sizeof(char) * strlen(av[i]) + 1);
		if (buf == NULL)
			return (NULL);
		buf = strcat(buf, av[i]);
		buf = strcat(buf, "\n");
		printf("buf: %s, s_buf: %d", buf, (int)sizeof(buf));

	}
	printf("buf: %s, s_buf: %d", buf, (int)sizeof(buf));
	return (buf);
}
