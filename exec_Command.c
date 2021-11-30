#include "shell.h"

char *execute(char *command)
{
	if (strcmp(command, builtintlist[0] == 0))
	{
		solution = builtinlist[0];
	}
	else if (strcmp(command, builtintlist[1] == 0))
	{
		solution = builtinlist[1];
	}
	else
	{
		solution = pathFunction(command);
	}
	return (solution)
}
