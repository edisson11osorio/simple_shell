#include "shell.h"

char *pathFunction(void)
{
	int i = 0;
	char *path = malloc(sizeof(char *) * 1024);

	printf("path antes es: %s\n", path);
	while (environ[i][0] != 'P' || environ[i][1] != 'A')
	{
		i++;
	}
	printf("environ[i] = %s", environ[i]);
	path = environ[i];
	printf("path despues es: %s\n", path);
	return (path);
}
