#include "shell.h"

int execFunction(char **token)
{
	if (strcmp(*token, "exit\n") == 0)
	{
		exit(1);
	}
	else if (strcmp(*token, "env\n") == 0)
	{
		int i;
		for (i = 0; environ[i] != NULL; i++)
		{
			puts(environ[i]);
		}
	}
	else
	{
		printf("ir al path\n");
		return (2);
	}
	return (-1);
}
