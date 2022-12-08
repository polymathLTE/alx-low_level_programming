/*include header files*/
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer -function name
 * @file: 


/*main function*/
/**
 * main - Entry point
 * @file_from: file whose content is to be copied
 * @file_to: file to be copied into
 *
 * Description: copies content of one file to another file
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{
	/*declare variables*/
	int op, rd, wr;
	char file_from, file_to;

	/*initialize variables*/
	file_from = argv[1];
	file_to = argv[2];

	/*if number if arguments is incorrect*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	/*if file_to exists, truncate it*/
	

	/*if cannot access file_from*/
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit (98);
	}

	/*if cannot create or write to file_to*/

	/*if cannot close file descriptor*/

	/*return*/
}
