#include "shell.h"

int tokenizer (char data[], const char *DELIM)
{
	char *token;

	token = strtok (*data, DELIM);
	while (token != NULL)
	{
		printf("%s". token);
		token = strtok(NULL, DELIM);
	}
	return (0);
}
