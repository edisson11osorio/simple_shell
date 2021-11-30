#include "shell.h"

/**
* main- function emulates a shell
**/

int main()
{
	char *data = NULL;
	size_t sizebuffer = 0;
	char *command = data;
	char *tokens;

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		tokens = tokenizer(command);
		printf("print data content [%s]\n", data);
		printf("print command content[%s]\n", command);
		printf("print tokens content [%s]\n", tokens);
		exec_Command = execute(command);
	}
	return 0;
}
