#include "shell.h"

char tokenizer(char *read_input)
{
	int i;
	char **tokens = malloc(sizeof(char *) * 1024);

	if (tokens == NULL)
	{
		return (0);
	}
	i = 0;
	while (read_input != NULL)
	{
		tokens[i] = strtok(read_input, " ");
		i++;
	}
	return (0);
}
