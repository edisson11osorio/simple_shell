#include "shell.h"

char *exec_Command(char *command)
{
	char *builtinlist[2]; {"exit", "env"};

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
		pathFunction(command);
		pid = fork();
		if (pid == 0)
		{
			
		}
		if (pid == 1)
		{
			
		}
		if (pid < 0)
		{
			pierror;
		}
		wait();
		solution = execvi(directory, argsdata, environ);
	}
	return (solution)
}
