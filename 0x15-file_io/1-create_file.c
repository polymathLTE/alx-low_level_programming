/*include header files*/
#include "main.h"
#include <stdlib.h>
#include <string.h>

/*function description*/
/**
 * create_file - function name
 * @filename: name of file to be created (string)
 * @text_content: string to write to @filename (string)
 *
 * Description: this function creates a file
 *
 * Return: (1) success, (-1) failure
 */

int create_file(const char *filename, char *text_content)
{
	/*declare variables*/
	int op, wr, text_count;

	/*checks if file is absent and fails if true*/
	if (filename == NULL)
		return (-1);

	/*checks if text_content is empty and creates an empty file*/
	if (text_content == NULL)
	{
		op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (op == -1)
			return (-1);
		return (1);
	}

	/*set the size of text_count*/
	text_count = strlen(text_content);

	/*set file handling variables*/
	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	wr = write(op, text_content, text_count);

	/*checks if any file handling process failed*/
	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	/*close processes*/
	close(op);

	/*return*/
	return (1);
}
