#include "shell.h"

/**
 * running_execfile - run the executable file to the instruction
 * @execfile: executable file
 * @token: instruction tokenized
 * Return: Nothing
 */

void running_execfile(char *execfile, char **token)
{
	pid_t pid;
	int execute = 0;

	if (execfile == NULL)
	{
		_puts("./shell: No such file or directory");
	}
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
