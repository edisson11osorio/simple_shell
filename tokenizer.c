#include "shell.h"

char **tokenizer(char *data)
{
	char **token = NULL;
	int i;
	const char DELIM = ' ';

	*token = strtok(data, &DELIM);
	i = 1;
 	while (token != NULL)
	{
		printf("%s\n", token[i]);
		token[i] = strtok(NULL, &DELIM);
		i++;
	}
	return (token);
}
