#include "shell.h"

/**
 *
 *
 **/
char *pathFunction(void)
{
	int i = 0;
	while (environ[i][0] != 'P' || environ[i][1] != 'A')
	{
		i++;
	}
	return (environ[i]);
}
