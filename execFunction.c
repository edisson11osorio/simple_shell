#include "shell.h"

void execFunction(char **token)
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
		char *path = malloc(sizeof(char *) * 1024);
		char **directories = malloc(sizeof(char *) * 1024);
		char *execfile;

		path = pathFunction();
		printf("path en exec antes es: %s\n", path);
		directories = tokenizer_path(path);
		printf("directories[0] = %s\n", directories[1]);
		path = pathFunction();
		printf("path en exec despues tokenizer es: %s\n", path);
		execfile = matchfunction(token, directories);
		printf("execfile = %s\n", execfile);
		running_execfile(execfile, token);
		path = pathFunction();
		printf("path en exec despues running es: %s\n", path);
	}
}
