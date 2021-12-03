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
		printf("printed from child process - %d\n", getpid());
		printf("execfile es %s\n", execfile);
		execve(execfile, token, environ);
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("printed from parent process - %d\n", getpid());
		wait(0);
	}
}
