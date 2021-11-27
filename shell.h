#ifndef SHELL_H
#define SHELL_H


/**
 * Header File - shell.h
 * 
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/stat.h>
#include <limits.h>
#include <stdarg.h>
#include <fcntl.h>
#include <stddef.h>

#define PROMPT ("$ ")

void prompt(void);
int read_input(char *data);
char tokenizer(char *read_input);

#endif
