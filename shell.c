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

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		if (*data == EOF)
		{
			printf("There are stopped jobs.");
			exit(0);
		}
		strcpy(command, data);
		tokens = tokenizer(command);
		execFunction(tokens);
	}
	return 0;
}
