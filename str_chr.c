#include "shell.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to string
 * @c: character to find
 * Return: 0 if character is found or -1
 */

int _strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
	{
	}
	if (s[i] == c)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
