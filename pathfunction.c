#include "shell.h"

char *pathFunction(void)
{
	int i = 0;
	char *path = malloc(sizeof(char *) * 1024);

	while (environ[i][0] != 'P' || environ[i][1] != 'A')
	{
		i++;
	}
	path = environ[i];
	return (path);
}