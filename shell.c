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

	do {
		prompt();
		data = read_input(&data, &sizebuffer);
		_strcpy(command, data);
		tokens = tokenizer(command);
		execFunction(tokens);
	} while (isatty(STDIN_FILENO));
	return (0);
}
