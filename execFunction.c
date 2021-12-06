#include "shell.h"

void execFunction(char **token, int number_loop)
{
	if (strcmp(*token, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
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
		char *path;
		char **directories = malloc(1024);
		char *execfile;
		char copyPath[1024];

		if (directories == NULL)
		{
			perror("error");
			exit(-1);
		}
		path = pathFunction();
		strcpy(copyPath, path);
		directories = tokenizer_path(copyPath);
		execfile = matchfunction(token, directories, number_loop);
		running_execfile(execfile, token);
	}
}
