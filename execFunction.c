#include "shell.h"

void execFunction(char **token)
{
	if (strcmp(*token, "exit") == 0)
	{
		exit(1);
	}
	else if (strcmp(*token, "env") == 0)
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
		char *execfile;

		path = pathFunction();
		directories = tokenizer_path(path);
		execfile = matchfunction(token, directories);
		running_execfile(execfile);
	}
}
