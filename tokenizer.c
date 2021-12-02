#include "shell.h"

char **tokenizer(char *data)
{
	char **token = malloc(sizeof(char *) *1024);
	const char *DELIM = " :";
	int i;

	token[0] = malloc(sizeof(char) * 1024);
	token[0] = strtok(data, DELIM);
	i = 0;
 	while (token[i] != NULL)
	{
		i++;
		token[i] = malloc(sizeof(char) * 1024);
		token[i] = strtok(NULL, DELIM);
	}
	return (token);
}
