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
	char **tokens = NULL;

	do {
		if (isatty(STDIN_FILENO))
		{
			prompt();
		}
		data = read_input(&data, &sizebuffer);
		_strcpy(command, data);
		tokens = tokenizer(command);
		execFunction(tokens);
	} while (1);
	return (0);
}
