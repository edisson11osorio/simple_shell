#include "shell.h"

char *matchfunction(char **token, char **directories)
{
	int i, function = 1;
	struct stat buf;
	char *concat;
	char *concat_temp;

	for (i = 1; directories[i] != NULL && function != 0; i++)
	{
		concat_temp = str_concat("/", *token);
		concat = str_concat(directories[i], concat_temp);
		function = stat(concat, &buf);
	}
	free(directories);
	return (concat);
}
