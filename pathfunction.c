#include "shell.h"

/**
 * pathFunction - Function that find the path from environ
 *
 * Return: Nothing
 */

char *pathFunction(void)
{
	int i = 0;

	while (environ[i][0] != 'P' || environ[i][1] != 'A')
	{
		i++;
	}
	return (environ[i]);
}
