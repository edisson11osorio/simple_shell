#include "shell.h"

char *matchfunction(char **token, char **directories)
{
	char *execfile = malloc(sizeof(char *) * 1024);
	int i, function;

	token[0] = strcat("/", token[0]);
	for (i = 0; *directories[i] != '\0' || function != 0; i++)
	{
		function = stat(directories[i], *token[0]);
	}
	execfile = strcat(directories[i],token[0]);
	return (execfile);
}
