#include "shell.h"

/**
* main- function emulates a shell
**/

int main()
{
	char *data = NULL;
	size_t sizebuffer = 0;

	const char *DELIM1 = " ";
	char *token;
	int i = 1;
	char command[1024];
	char *tokens;

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);

		write(STDOUT_FILENO, data, sizebuffer);
		token = strtok(data, DELIM1);
		while (token != NULL)
		{
			token = strtok(NULL, DELIM1);
			// token[i] = NULL;
			// i++;
		}
		// strcpy(command, data);
		// tokens = tokenizer(command);
		// printf("print data content [%s]\n", data);
		// printf("print command content[%s]\n", command);
		// printf("print tokens content [%s]\n", tokens);
		/*execute = exec_Command(command);*/
	}
	return 0;
}
