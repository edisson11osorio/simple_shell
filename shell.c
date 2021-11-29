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

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		write(STDOUT_FILENO, data, sizebuffer);
		token = strtok(data, DELIM1);
		while (token != NULL)
		{
			token = strtok(NULL, DELIM1);
			printf("%s\n", token);
		}
	}
return 0;
}
