#include "shell.h"

/**
* main- function emulates a shell
**/

int main()
{
	char *data = NULL;
	size_t sizebuffer = 0;
	/*char **args;*/

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		printf("%s", data);
		/**args = tokenizer(data);*/
	}
return 0;
}
