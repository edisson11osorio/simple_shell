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
extern char **environ;

/**
 * struct mybuild- has the builtin funct
 */
typedef struct mybuild
{
	char *type;
	void (*func)(char **tokens, int count, char *av, char *_paths,
		     char *path_file, char *input_arr);
} mybuild_t;


void prompt(void);
char *read_input(char **data, size_t *sizebuffer);
char *tokenizer(char *data);
char *execute(char *command);
char *pathFunction(char *command);
void exit_function(int status);
char *getenv(const char *name);

#endif
