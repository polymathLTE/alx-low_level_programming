/*include header files*/
#include "main.h"
#include <string.h>

/*function description*/
/**
 * append_text_to_file - function name
 * @filename: file to be amended (string pointer)
 * @text_content: text to be appended (string pointer)
 *
 * Description: this function appends to the end of @filename
 *
 * Return: (1) success, (-1) failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/*declare variables*/
	int op, wr, text_count;

	/*checks if filename exists*/
	if (filename == NULL)
		return (-1);

	/*checks if text_content is NULL*/
	if (text_content == NULL)
	{
		op = open(filename, O_WRONLY | O_APPEND);
		if (op == -1)
			return (-1);
		return (1);
	}

	/*set the size of text_count*/
	text_count = strlen(text_content);

	/*set the file handling variables*/
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, text_count);

	/*checks if any file handling process failed*/
	if (op == -1 || wr == -1)
		return (-1);

	/*return*/
	return (1);
}
