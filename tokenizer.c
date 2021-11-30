#include "shell.h"

char **tokenizer(char *data)
{
	char **token = malloc(sizeof(char *) *1024);
	const char *DELIM = " ";
	int i;

	token[0] = strtok(data, DELIM);
	i = 1;
 	while (token != NULL)
	{
		token[i] = malloc(sizeof(char) * 1024);
		printf("%s\n", token[i]);
		token[i] = strtok(NULL, DELIM);
		i++;
	}
	return (token);
}
