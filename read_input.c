#include "shell.h"

char read_input(char *data)
{
	int read_input;
	char **buffer;
	ssize_t sizebuffer = strlen(data);

	ssize_t read_input;
	char **buffer;
	size_t *sizebuffer = strlen(data);

	read_input = getline(buffer, sizebuffer, STDIN);
	if (read_input == '\0')
	{
		return ('\0');
	}
	return (read_input);
}
