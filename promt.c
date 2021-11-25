#include <unistd.h>
#include "shell.h"

/**
* prompt - prints the prompt of the shell
* Return : void
*/

void prompt(void)
{
    if (isatty(STDIN_FILENO))
    {
        write(STDOUT_FILENO, PROMPT, strlen(PROMPT));
    }
}
