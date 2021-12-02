#include "shell.h"

char *matchfunction(char **token, char **directories)
{
	char *execfile = malloc(sizeof(char) * 1024);
	int i, function = 1;
	struct stat *buf = malloc(1024);
	char *concat_1, *concat_2;

	concat_1 = strcat("/", token[0]);
	for (i = 0; *directories[i] != '\0' || function != 0; i++)
	{
		concat_2 = strcat(directories[i], concat_1);
		function = stat(concat_2, buf);
	}
	execfile = concat_2;
	return (execfile);
}
