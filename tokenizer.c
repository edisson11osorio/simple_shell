#include "shell.h"

char **tokenizer(char *data)
{
	char **token = malloc(sizeof(char *) *1024);
	const char *DELIM = " \n";
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

char **tokenizer_path(char *data)
{
	char **token = malloc(sizeof(char *) * 1024);
	const char *DELIM = "=:";
	const char *DELIM2 = ":";
	int i;
	char *copy = malloc(sizeof(char *) * 1024);
	strcpy(copy, data);
	printf("copy en tokenizer es: %s\n", copy);

	printf("data en tokenizer es: %s\n", data);
	token[0] = malloc(sizeof(char) * 1024);
	token[0] = strtok(copy, DELIM);
	i = 0;
 	while (token[i] != NULL)
	{
		printf("token[i] en tokenizar path es = %s\n", token[i]);
		i++;
		token[i] = malloc(sizeof(char) * 1024);
		token[i] = strtok(NULL, DELIM2);
	}
	printf("data en tokenier path final es: %s\n", data);
	return (token);
}
