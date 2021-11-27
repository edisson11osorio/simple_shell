#include "shell.h"

char read_input(char *data)
{
	ssize_t read_input;
	char **buffer;
	size_t sizebuffer = strlen(*data);

	read_input = getline(buffer, sizebuffer, 1);
	if (read_input == NULL)
	{
		return (NULL);
	}
	return (read_input);
}
