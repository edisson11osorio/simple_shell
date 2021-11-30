#include "shell.h"

/**
* main- function emulates a shell
**/

int main()
{
	char *data = NULL;
	size_t sizebuffer = 0;
	char command[1024];
	char **tokens = NULL;

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		strcpy(command, data);
		*tokens = tokenizer(command);
		printf("print data content [%s]\n", data);
		printf("print command content[%s]\n", command);
		printf("print tokens content [%s]\n", tokens[1]);
/*execute = exec_Command(command);*/
	}
	return 0;
}
