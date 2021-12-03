#include "shell.h"

char *read_input(char **data, size_t *sizebuffer)
{
	ssize_t charactersRead = 0;
	fflush(stdin);
	charactersRead = getline(data, sizebuffer, stdin);
	if (charactersRead == '\0')
	{
		free(*data);
		return (NULL);
	}
	return (*data);
}
