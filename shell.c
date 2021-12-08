#include "shell.h"

/**
 * main - function that emulates a shell
 *
 * Return: Always 0.
 */

int main(void)
{
	char *data = NULL;
	size_t sizebuffer = 0;
	char command[1024];
	char **tokens;
	int number_loop = 1;

	while (1)
	{
		prompt();
		data = read_input(&data, &sizebuffer);
		if (*data == EOF)
		{
			/*printf("\n");*/
			exit(0);
		}
		strcpy(command, data);
		tokens = tokenizer(command);
		execFunction(tokens, number_loop);
		number_loop++;
	}
	return (0);
}
