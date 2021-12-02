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
		char *path = malloc(sizeof(char) * 1024);
		char **directories = malloc(sizeof(char *) * 1024);
		int i;

		path = pathFunction();
		directories = tokenizer(path);
		for (i = 1; *directories[i] != '\0'; i++)
		{
			printf("%s\n", directories[i]);
		}
	}
}
