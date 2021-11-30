char *pathFunctions (args *directoriesPath, str *command)
{
	char *DirectoriesPath = environ(path);
	int *function;

	

	for (i = 0; directoriesPath[i] != '\0'; i++)
	{
		if (function = 0)
		{
			return (0);	
		}
		function = stat(directoriesPath[i], command);
	}
	return (1);
}
