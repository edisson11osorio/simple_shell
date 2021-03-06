#include "shell.h"

/**
 * matchfunction - Function that find the executable file of
 * a not builtin function
 * @token: instruction tokenized in args
 * @directories: path tokenized
 * Return: pointer with the path of the executable file
 */

char *matchfunction(char **token, char **directories)
{
	int i, function = 1;
	struct stat buf;
	char *concat, *concat_temp;

	if (_strchr(*token, '/') == 0)
	{
		function = stat(*token, &buf);
		concat = *token;
	}
	else
	{
		for (i = 1; directories[i] != NULL && function != 0; i++)
		{
			concat_temp = str_concat("/", *token);
			concat = str_concat(directories[i], concat_temp);
			function = stat(concat, &buf);
		}
	}
	if (function != 0)
	{
		free(directories);
		return (NULL);
	}
	free(directories);
	return (concat);
}
