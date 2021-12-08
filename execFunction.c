#include "shell.h"

/**
 * execFunction - looks the input instruction, compare and execute
 * @token: input tokenized
 * Return: Always 0.
 */

void execFunction(char **token)
{
	if (_strcmp(*token, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	else if (_strcmp(*token, "env") == 0)
	{
		int i;

		for (i = 0; environ[i] != NULL; i++)
		{
			_puts(environ[i]);
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
			exit(EXIT_FAILURE);
		}
		path = pathFunction();
		_strcpy(copyPath, path);
		directories = tokenizer_path(copyPath);
		execfile = matchfunction(token, directories);
		running_execfile(execfile, token);
	}
}
