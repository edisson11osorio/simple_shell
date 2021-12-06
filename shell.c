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
	int number_loop = 0;

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
		number_loop++;
		printf("number loop is %d", number_loop);
	}
	return 0;
}
