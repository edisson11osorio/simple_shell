#include "shell.h"

char **tokenizer(char *data)
{
	const char DELIM = ' ';
	char **token = NULL;
	int i;

	token = strtok(data, &DELIM);
	i = 1;
 	while (token != NULL)
	{
		printf("%s\n", *token);
		token[i] = strtok(NULL, &DELIM);
		i++;
	}
	return (token);
}
