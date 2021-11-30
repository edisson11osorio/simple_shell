#include "shell.h"

/**
* main- function emulates a shell
**/

int main()
{
	char *data = NULL;
	size_t sizebuffer = 0;
	char *tokens;

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		tokens = tokenizer(data);
		printf("print data content [%s]\n", data);
		printf("print tokens content [%s]\n", tokens);
	}
	return 0;
}
