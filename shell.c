#include "shell.h"

/**
* main- function emulates a shell
**/

int main()
{
	char *data = NULL;
	size_t sizebuffer = 0;
	char command[1024];
	char **tokens;
	int execute;

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		strcpy(command, data);
		tokens = tokenizer(command);
		execute = execFunction(tokens);
		printf("execute en shell.c es %d\n", execute);
		printf("tokens en shell.c es %s\n", tokens[0]);
	}
	return 0;
}
