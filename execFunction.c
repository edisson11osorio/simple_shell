#include "shell.h"

int execFunction(char **token)
{
	if (strcmp(*token, "exit\n") == 0)
	{
		exit(1);
	}
	else if (strcmp(*token, "env\n") == 0)
	{
		printf("correr funcion env\n");
		return (1);
	}
	else
	{
		printf("ir al path\n");
		return (2);
	}
	return (-1);
}
