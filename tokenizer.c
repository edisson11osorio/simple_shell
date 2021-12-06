#include "shell.h"

char **tokenizer(char *command)
{
	char **token = malloc(sizeof(char *) * 1024);
	const char *DELIM = " \n";
	int i;

	if (token == NULL)
	{
		return(NULL);
	}
	token[0] = malloc(sizeof(char) * 1024);
	if (token[0] == NULL)
	{
		return (NULL);
	}
	token[0] = strtok(command, DELIM);
	i = 0;
	while (token[i] != NULL)
	{
		i++;
		token[i] = malloc(sizeof(char) * 1024);
		if(token[i] == NULL)
		{
			return (NULL);
		}
		token[i] = strtok(NULL, DELIM);
	}
	return (token);
}

char **tokenizer_path(char *copyPath)
{
	char **directories = malloc(sizeof(char *) * 1024);
	const char *DELIM = "=:";
	int i;

	if (directories == NULL)
	{
		return (NULL);
	}
	directories[0] = malloc(sizeof(char) * 1024);
	if (directories[0] == NULL)
	{
		return (NULL);
	}
	directories[0] = strtok(copyPath, DELIM);
	i = 0;
	while (directories[i] != NULL)
	{

		i++;
		directories[i] = malloc(sizeof(char) * 1024);
		if (directories[i] == NULL)
		{
			return (NULL);
		}
		directories[i] = strtok(NULL, DELIM);
	}
	return (directories);
}
