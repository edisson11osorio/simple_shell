#include "shell.h"

/**
 * main- function emulates a shell
 **/
char *matchfunction(char **token, char **directories, int number_loop)
{
	int i, function = 1;
	struct stat buf;
	char *concat, *concat_temp;

	for (i = 1; directories[i] != NULL && function != 0; i++)
	{
		concat_temp = str_concat("/", *token);
		concat = str_concat(directories[i], concat_temp);
		function = stat(concat, &buf);
	}
	if (function != 0)
	{
		printf("hsh: %d: %s: not found\n", number_loop, *token);
		free(directories);
		return (0);
	}
	free(directories);
	return (concat);
}
