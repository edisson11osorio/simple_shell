#include "shell.h"

char *matchfunction(char **token, char **directories)
{
	int i/*function = 1*/;
	/*struct stat buf;
	char *concat;
	char *concat_temp;*/

	printf("token es %s\n", *token);
	for (i = 0; directories[i] != NULL/* || function != 0*/;i++)
	{
		printf("%s\n", directories[i]);
		/*
		printf("en matchfunction, directories[%i] es = %s", i, directories[i]);
		concat_temp = strcat("/", *token);
		printf("en matchfunction, concat_temp es = %s",concat_temp);
		concat = strcat(directories[i], concat_temp);
		printf("en matchfunction, concat es = %s",concat);
		function = stat(concat, &buf);
		*/
	}
	return (directories[0]);
}
