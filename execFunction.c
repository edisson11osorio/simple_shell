#include "shell.h"

void execFunction(char **token)
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
		char *path = malloc(sizeof(char *) * 1024);
		char **directories = malloc(sizeof(char *) * 1024);
		int i;
		char *function;

		path = pathFunction();
		directories = tokenizer(path);
		for (i = 0; *directories[i] != '\0'; i++)
		{
			if (function == 0)
			{
				return (0);
			}
			function = stat(directories[i], token);
		}
	}
}
