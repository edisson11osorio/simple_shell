#include "shell.h"

char *tokenizer(char *data)
{
	const char *DELIM = " ";
	char *token;

	token = strtok(data, DELIM);
 	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, DELIM);
	}
	return (token);
}
