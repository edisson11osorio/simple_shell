char *getenviron(str *PATH)
{
	char *DELIM = ":";
	char *PATH[1024];

	directoriesPath = strtok(**environ, DELIM);
	while (environ != NULL)
	{
		directoriesPath = strtok(NULL, DELIM);
	}
	return (directoriesPath);
}
