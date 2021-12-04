#include "shell.h"

char **tokenizer(char *command)
{
	char **token = malloc(sizeof(char *) * 1024);
	const char *DELIM = " \n";
	int i;

	token[0] = malloc(sizeof(char) * 1024);
	token[0] = strtok(command, DELIM);
	i = 0;
	while (token[i] != NULL)
	{
		i++;
		token[i] = malloc(sizeof(char) * 1024);
		token[i] = strtok(NULL, DELIM);
	}
	return (token);
}

char **tokenizer_path(char *path)
{
	char **directories = malloc(sizeof(char *) * 1024);
	const char *DELIM = "=:";
	int i;
	char *copyPath = malloc(sizeof(char *) * 1024);
	strcpy(copyPath, path);

	directories[0] = malloc(sizeof(char) * 1024);
	directories[0] = strtok(copyPath, DELIM);
	i = 0;
	while (directories[i] != NULL)
	{

		i++;
		directories[i] = malloc(sizeof(char) * 1024);
		directories[i] = strtok(NULL, DELIM);
	}
	free(copyPath);
	return (directories);
}
