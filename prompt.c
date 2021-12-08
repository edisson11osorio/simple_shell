#include "shell.h"

/**
 * prompt - prints the prompt of the shell
 * Return : Nothing
 */
void prompt(void)
{
    if (isatty(STDOUT_FILENO))
    {
        write(STDOUT_FILENO, PROMPT, strlen(PROMPT));
    }
}
