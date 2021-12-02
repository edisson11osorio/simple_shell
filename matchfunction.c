#include "shell.h"

char *matchfunction(char **token, char **directories)
{
	int i, function = 1;
	struct stat *buf = malloc(1024);
	char *concat_2 = malloc(1024);
	char *concat_1 = malloc(1024);

	concat_1 = strcat("/", token[0]);
	printf("%s", concat_1);
	printf("%s", directories[0]);
	for (i = 0; *directories[i] != '\0' || function != 0; i++)
	{
		concat_2 = strcat(directories[i], concat_1);
		printf("%s", concat_2);
		function = stat(concat_2, buf);
		}
	return (concat_1);
}
