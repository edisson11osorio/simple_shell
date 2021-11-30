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
		strcpy(command, data);
		tokens = tokenizer(command);
		printf("print shell.c token[0]%s", tokens[0]);
		/*execute = exec_Command(command);*/
	}
	return 0;
}
