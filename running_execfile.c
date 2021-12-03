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
		printf("proceso hijo es %d\n", getpid());
		printf("prueba\n");
		printf("execfile = %s", execfile);
		execve(execfile, token, environ);
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("proceso padre - %d\n", getpid());
		wait(0);
	}
}
