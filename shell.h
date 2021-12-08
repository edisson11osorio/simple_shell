#ifndef SHELL_H
#define SHELL_H


/**
 * Header File - shell.h
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


void prompt(void);
char *read_input(char **data, size_t *sizebuffer);
char **tokenizer(char *command);
char **tokenizer_path(char *path);
char *getenv(const char *path);
int _atoi(char *c);
void execFunction(char **token, int number_loop);
char *pathFunction(void);
char *matchfunction(char **token, char **directories, int number_loop);
char *str_concat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void running_execfile(char *execfile, char **token);

#endif
