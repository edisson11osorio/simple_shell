#include "shell.h"

void running_execfile(char *execfile, char **token)
{
	pid_t pid;
	int execute = 0;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		execute = execve(execfile, token, environ);
		if (execute == -1)
		{
			exit(errno);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(0);
	}
}
