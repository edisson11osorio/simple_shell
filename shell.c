#include "shell.h"

/**
* main- function emulates a shell
**/

int main()
{
	char *data = NULL;
	size_t sizebuffer = 0;
	/*char **args;*/

	prompt();
	while (1)
	{
		data = read_input(&data, &sizebuffer);
		printf("%s", data);
		/**args = tokenizer(data);*/
	}
return 0;
}
