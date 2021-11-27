#include "shell.h"

int read_input(char *data)
{
	int read_input;
	char **buffer;
	ssize_t sizebuffer = strlen(data);

	read_input = getline(buffer, sizebuffer, 1);
	if (read_input == NULL)
	{
		return (NULL);
	}
	return (read_input);
}
