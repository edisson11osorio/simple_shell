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

/**MACROS*/

#define true (1)
#define false (0)
#define PROMPT ("$ ")

extern char **environ;

/**
 * struct mybuild- has the builtin funct
 */
typedef struct mybuild
{
    char *type;
	void (*func)(char **tokens);
} mybuild_t


void prompt(void);
char *read_input(char **data, size_t *sizebuffer);
char **tokenizer(char *data);
char *execute(char *command);
char *pathFunction(char *command);
char *getenv(const char *path);
int _atoi(char *c);


/**
* functions that cointains  buil-in functions
*/
void _exitt(char **tokens);
void _env(char **tokens);

/**function_help*/
int _strcmp(char *s1, char *s2);

#endif
