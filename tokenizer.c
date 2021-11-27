#include "shell.h"

char tokenizer(char *read_input)
{
	char *tokens[];
	int i;

	tokens = malloc(sizeof(char *)* 1024);
	if (tokens == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (read_input != NULL)
	{
		tokens[i] = strtok(read_input," ");
		i++;
	}
	return (tokens);
}
