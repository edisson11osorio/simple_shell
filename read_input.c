#include "shell.h"

int read_input(*data)
{
	int read_input;

	read_input = getline(buffer,strlen(*data) ,1);
	if (read_input == NULL)
	{
		return (-1);
	}
	return (read_input);
}
