#include "shell.h"

void running_execfile(char *execfile, char **token)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		execve(execfile, token, environ);
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(0);
	}
}
