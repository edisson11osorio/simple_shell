#include "shell.h"

/**
 * read_input_interactive - function that read and store any instruction
 * @data: the adress where instruction is stored (buffer)
 * @sizebuffer: size of instruction
 * Return: pointer to buffer where information is stored
 */

char *read_input_interactive(char **data, size_t *sizebuffer)
{
	ssize_t charactersRead = 0;

	fflush(stdin);
	charactersRead = getline(data, sizebuffer, stdin);
	if (charactersRead == '\0')
	{
		free(*data);
		return (NULL);
	}
	if (charactersRead == EOF)
	{
		_puts("\n");
		free(*data);
		exit(EXIT_SUCCESS);
	}
	return (*data);
}
