/*included headers*/
#include "main.h"
#include <stdlib.h>

/*function descriptor*/
/**
 * read_textfile - function name
 * @filename: const string pointer
 * @letters: size_t variable
 *
 * Description: reads a text file and displays it to POSIX stdout
 *
 * Return: (val) failure/success
 */

/*function start*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*declare variables*/
	ssize_t wr, op, rd;
	char *buf;

	/*initialize variables*/
	wr = 0;

	/*checks if filename is null*/
	if (filename == NULL)
		return (0);

	/*set buf size with malloc*/
	buf = malloc(sizeof(char) * letters);

	/*sets the file handling variables*/
	op = open(filename, O_RDWR);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	/*checks if any file handling process failed and free buf*/
	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	/*free buf and close processes*/
	free(buf);
	close(op);

	/*return*/
	printf("%s", buf);
	return (wr);
}
