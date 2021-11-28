#include "shell.h"

char *read_input(char **data, size_t *sizebuffer)
{
	ssize_t read_input = 0;

	read_input = getline(data, sizebuffer, stdin);
	if (read_input == '\0')
	{
		free(*data);
		return (NULL);
	}
	return (*data);
}
