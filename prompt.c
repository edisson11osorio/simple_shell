#include "shell.h"

/**
 * prompt - prints the prompt of the shell
 * Return : Nothing
 */
void prompt(void)
{
	write(STDOUT_FILENO, PROMPT, strlen(PROMPT));
}
