#include "shell.h"
#include "string.h"

/**
 * _exit - Program that exits the calling program.
 * Return: Void.
 * @void: Void.
 */

void _exitt(char **tokens)

{
    if (*tokens)
        exit(1);
}
